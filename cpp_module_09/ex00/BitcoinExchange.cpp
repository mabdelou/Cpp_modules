/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:15 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:45:16 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string const split(std::string const &data,char c)
{
    static size_t pos=0;
    std::string new_data;
    for(;pos<data.length();pos++)
    {
        if(data[pos] == c && pos != 0)
        {
            for(size_t a=pos;a<data.length();a++)
            {
                if(data[a] == c)
                    pos++;
                else
                    break;
            }
            return(new_data);
        }
        else
            new_data += data[pos];
    }
    pos=0;
    return(new_data);
}
void BitcoinExchange::CheckTimeIfValid(t_data *data)
{
    int count = 0;
    for(size_t a=0;a < data->time.length();a++)
    {
        if(data->time[a] == '-')
            count++;
        if((data->time[a] > '9' || data->time[a] < '0') && data->time[a] != '-')
        {
            std::cout << C_RED << "Error: bad time input => " << data->time << C_WHITE << std::endl;
            data->can_write = false;
            return ;
        }
    }
    if(count != 2)
    {
        std::cout << C_RED << "Error: bad time input => " << data->time << C_WHITE << std::endl;
        data->can_write = false;
        return ;
    }
    if(data->can_write)
    {
        data->year = atoi(split(data->time,'-').c_str());
        data->mounth = atoi(split(data->time,'-').c_str());
        data->day = atoi(split(data->time,'-').c_str());
    }
}

void BitcoinExchange::CheckLineIfValid(t_data *data,int a)
{
    int pnt_count = 0,sgnl_value=0;
    size_t size=0;
    if(a == 2)
    {
        int count = 0;
        for(size_t a=0;a < data->time.length();a++)
        {
            if(data->time[a] == '-')
                count++;
            if((data->time[a] > '9' || data->time[a] < '0') && data->time[a] != '-')
            {
                std::cout << C_RED << "Error: bad time input => " << data->time << C_WHITE << std::endl;
                data->can_write = false;
                return ;
            }
        }
        if(count != 2)
        {
            std::cout << C_RED << "Error: bad time input => " << data->time << C_WHITE << std::endl;
            data->can_write = false;
            return ;
        }
        if(data->can_write)
            data->coin_num = atof(data->data.c_str());
    }
    else
    {
        std::cout << C_RED << "Error: bad input => " << data->time << C_WHITE << std::endl;
        data->can_write = false;
    }
    for(;size < data->data.length();size++)
    {

        if(data->data[size] == ',')
            data->data[size] = '.';
        if(data->data[size] == '.')
            pnt_count++;
        if(data->data[size] == '-')
            sgnl_value++;
        if((data->data[size] > '9' || data->data[size] < '0')
            && data->data[size] != '.' && data->data[size] != '-')
        {
            std::cout << C_RED << "Error: bad data input => " << data->data << C_WHITE << std::endl;
            data->can_write = false;
            return ;
        }
    }
    if(data->time[size-1] == '.' || sgnl_value > 1
        || data->time[0] == '.' || pnt_count > 1)
    {
            std::cout << C_RED << "Error: bad data input => " << data->time << C_WHITE << std::endl;
            data->can_write = false;
            return ;
    }
    if(data->coin_num < 0)
    {
        std::cout << C_RED << "Error: not a positive number." << C_WHITE << std::endl;
        data->can_write = false;
    }
    else if(data->coin_num > 1000)
    {
        std::cout << C_RED << "Error: too large a number." << C_WHITE << std::endl;
        data->can_write = false;
    }
    else if (data->can_write)
    {
        if(data->year == 2009 && data->mounth == 1 &&  data->day < 3)
        {
            std::cout << C_RED << "Error: " << data->time << " => Bitcoin Unknown" << C_WHITE << std::endl;
            data->can_write = false;
        }
        else if(data->year < 2009)
        {
            std::cout << C_RED << "Error: " << data->time << " => Bitcoin Unknown" << C_WHITE << std::endl;
            data->can_write = false;
        }
        else if(data->mounth > 12)
        {
            std::cout << C_RED << "Error: " << data->time << " => bad mounth number." << C_WHITE << std::endl;
            data->can_write = false;
        }
        else if(data->day > 31 && ((data->mounth % 2 == 1 && data->mounth <= 8) || (data->mounth % 2 == 0 && data->mounth > 8)))
        {
            std::cout << C_RED << "Error: " << data->time << " => bad day number." << C_WHITE << std::endl;
            data->can_write = false;
        }
        else if(data->day > 30 && ((data->mounth % 2 == 0 && data->mounth <= 8) || (data->mounth % 2 == 1 && data->mounth > 8)))
        {
            std::cout << C_RED << "Error: " << data->time << " => bad day number." << C_WHITE << std::endl;
            data->can_write = false;
        }
        else if(data->day > 28 && data->mounth == 2 && data->year % 4 != 0)
        {
            std::cout << C_RED << "Error: " << data->time << " => bad day number." << C_WHITE << std::endl;
            data->can_write = false;
        }
    }

}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream infile;
    std::string time,empty;
    float value;
    char str[100];
    infile.open("data.csv", std::ifstream::in);
    if(!infile.is_open())
        throw(empty + C_RED + "bad database file" + C_WHITE);
    infile.getline(str,100);
    if (!infile.good())
    {
        infile.close();
        throw(empty + C_RED + "empty database file" + C_WHITE);
    }
    while(infile.getline(str,100))
    {
        if(str[0] == ' ' || str[0] == '\t')
            throw(empty + C_RED + "bad database file input" + C_WHITE);
        time = split(str,',').c_str();
        value = atof(split(str,',').c_str());
        this->DataBase[time] = value;
    }
    infile.close();
}
void BitcoinExchange::GetBitcoinValue(std::string filepath)
{
    std::ifstream infile;
    std::string empty;
    char str[100];
    infile.open(filepath, std::ifstream::in);
    if(!infile.is_open())
        throw(empty + C_RED + "Error: could not open input file." + C_WHITE);
    infile.getline(str,100);
    if (!infile.good())
    {
        infile.close();
        throw(empty + C_RED + "empty input file" + C_WHITE);
    }
    while(infile.getline(str,100))
    {
        std::stringstream sstream(str);
        t_data data;
        if(str[0] == ' ' || str[0] == '\t')
            throw(empty + C_RED + "bad input of input file" + C_WHITE);
        {
            sstream >> data.time;
            CheckTimeIfValid(&data);
        }
        {
            int a=0;
            for(;sstream >> data.data;a++)
                ;
            CheckLineIfValid(&data,a);
        }
        if(data.can_write)

            std::cout << data.time << " => " << data.data << " = " <<  DataBase[(--DataBase.upper_bound(data.time))->first] * data.coin_num << std::endl;
    }
    infile.close();
}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &obj)
: DataBase(obj.DataBase)
{

}
BitcoinExchange::~BitcoinExchange()
{

}


t_data::s_data()
{
    day = 0;
    mounth = 0;
    year = 0;
    coin_num = 0;
    can_write = true;
}

t_data::~s_data()
{
    
}