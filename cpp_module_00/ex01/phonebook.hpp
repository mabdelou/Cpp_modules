/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 12:12:33 by mabdelou          #+#    #+#             */
/*   Updated: 2022/06/17 12:12:34 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cctype>
# include <cstring>
#include <iomanip>

class Contact
{       
    private:
 
        std::string  last_name;
        std::string  first_name;
        std::string  nickname;
        std::string  darkest_secret;
        std::string  phone_number;
        int status;

    public:
        void set_lastname(std::string l_n);
        std::string get_lastname(void);
        void set_firstname(std::string l_n);
        std::string get_firstname(void);
        void set_nickname(std::string n_n);
        std::string get_nickname(void);
        void set_darkest_secret(std::string d_s);
        std::string get_darkest_secret(void);
        void set_phone_number(std::string p_n);
        std::string get_phone_number(void);
        void set_status(int st);
        int get_status(void);
};

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        Contact *get_class(void);
};

void ft_add_contact(Contact *contact, std::string prompt);
void ft_print_contact(Contact *contact, int k);
void ft_print_spesified_contact(Contact *contact, int index);
int ft_search_spesified(Contact *contact);

#endif
