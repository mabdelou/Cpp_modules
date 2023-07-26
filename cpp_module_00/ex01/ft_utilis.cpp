/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilis.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:11:36 by mabdelou          #+#    #+#             */
/*   Updated: 2022/06/17 12:11:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int ft_strlen(std::string str)
{
    int a;

    a = 0;
    while(str[++a]);
    return (a);
}

void ft_print_ten_char(std::string str)
{
    int a;
    int size;

    size = ft_strlen(str);
    a = -1;
    std::cout << '|';
    std::cout << std::setw(11 - size);
    if(size <= 10)
        while(++a < 10)
            std::cout <<  str[a];
    else if(size > 10)
    {
        while(++a < 9)
            std::cout <<  str[a];
        std::cout << '.';
    }
}

void ft_add_contact(Contact *contact, std::string prompt)
{
    std::cout << "enter the last name : ";
    std::cin >> prompt;
    contact->set_lastname(prompt);
    std::cout << "enter the first name : ";
    std::cin >> prompt;
    contact->set_firstname(prompt);
    std::cout << "enter the nickname : ";
    std::cin >> prompt;
    contact->set_nickname(prompt);
    std::cout << "enter the darkest secret : ";
    std::cin >> prompt;
    contact->set_darkest_secret(prompt);
    std::cout << "enter phone number : ";
    std::cin >> prompt;
    contact->set_phone_number(prompt);
    contact->set_status(1);
}

void ft_print_contact(Contact *contact, int index)
{
    while(1)
    {
        if(contact[++index].get_status() == 0 || index == 8)
            break;
        std::cout << std::endl;
        std::cout << std::setw(27) << "contact " << index + 1 << std::endl;
        std::cout << '|';
        std::cout << std::setw(10) << "lastname";
        std::cout << '|';
        std::cout << std::setw(10) << "firstname";
        std::cout << '|';
        std::cout << std::setw(10) << "nickname";
        std::cout << '|';
        std::cout << std::setw(10) << "index";
        std::cout << '|' << std::endl;
        ft_print_ten_char(contact[index].get_lastname());
        ft_print_ten_char(contact[index].get_firstname());
        ft_print_ten_char(contact[index].get_nickname());
        ft_print_ten_char(std::to_string(index));
        std::cout << '|' << std::endl;
    }
}

void ft_print_ten_char_2(std::string str)
{
    int a;
    int size;

    size = ft_strlen(str);
    a = -1;
    std::cout << std::setw(11 - size);
    if(size <= 10)
        while(++a < 10)
            std::cout <<  str[a];
    else if(size > 10)
    {
        while(++a < 9)
            std::cout <<  str[a];
        std::cout << '.';
    }
}

void ft_print_spesified_contact(Contact *contact, int index)
{

    if(contact[index].get_status() == 0 || index > 7 || index < 0)
    {
        std::cout << "undifined contact !! " << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << std::setw(17) << "----> contact : " << std::setw(5) << index + 1 << std::endl;
    std::cout << std::endl;

    std::cout << std::setw(17) << "lastname : ";
    ft_print_ten_char_2(contact[index].get_lastname());
    std::cout << std::endl;

    std::cout << std::setw(17) << "firstname : ";
    ft_print_ten_char_2(contact[index].get_firstname());
    std::cout << std::endl;

    std::cout << std::setw(17) << "nicknam : ";
    ft_print_ten_char_2(contact[index].get_nickname());
    std::cout << std::endl;

    std::cout << std::setw(16) << "darkest secret : ";
    ft_print_ten_char_2(contact[index].get_darkest_secret());
    std::cout << std::endl;

    std::cout << std::setw(17) << "phone number : ";
    ft_print_ten_char_2(contact[index].get_phone_number());
    std::cout << std::endl;
}


int ft_search_spesified(Contact *contact)
{
    std::string std;

    while(1)
    {
        std::cout << "wana see all contact ? (Y\\N)" << std::endl;
        std::cin >> std;
        if (std == "N")
        {
            std::cout << "enter number of index contact (0 to 7)" << std::endl;
            std::cin >> std;
            for (int j = 0; j < 8; j++)
                if(std == std::to_string(j))
                    ft_print_spesified_contact(contact, j);
            return 0;
        }
        else if (std == "Y")
            return 1;

    }
}