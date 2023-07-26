/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:20 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:45:21 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_H__
# define BITCOINEXCHANGE_H__

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <sstream>
# include <algorithm>

# define C_BLUE "\e[38;2;20;200;235m"
# define C_PURPLE "\e[38;2;174;21;235m"
# define C_RED "\e[38;2;235;43;21m"
# define C_WHITE "\e[38;2;235;255;255m"

typedef struct s_data
{
    std::string time;
    std::string data;
    std::string new_time;
    int day;
    int mounth;
    int year;
    float coin_num;
    bool can_write;
    s_data();
    ~s_data();
}t_data;

class BitcoinExchange
{
    public:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &obj);
        ~BitcoinExchange();
        void GetBitcoinValue(std::string filepath);
        void CheckLineIfValid(t_data *data,int a);
        void CheckTimeIfValid(t_data *data);

    private:
        std::map<std::string,float> DataBase; 
};

std::string const split(std::string const&,char);
#endif