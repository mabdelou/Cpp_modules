/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:36:51 by mabdelou          #+#    #+#             */
/*   Updated: 2022/06/20 14:36:53 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contact::set_lastname(std::string l_n)
{
    last_name  = l_n;
}
std::string Contact::get_lastname(void)
{
    return (last_name);
}
void Contact::set_firstname(std::string l_n)
{
    first_name  = l_n;
}
std::string Contact::get_firstname(void)
{
    return (first_name);
}
void Contact::set_nickname(std::string n_n)
{
    nickname  = n_n;
}
std::string Contact::get_nickname(void)
{
    return (nickname);
}
void Contact::set_darkest_secret(std::string d_s)
{
    darkest_secret  = d_s;
}
std::string Contact::get_darkest_secret(void)
{
    return (darkest_secret);
}
void Contact::set_phone_number(std::string p_n)
{
    phone_number = p_n;
}
std::string Contact::get_phone_number(void)
{
    return (phone_number);
}
void Contact::set_status(int st)
{
    status  = st;
}
int Contact::get_status(void)
{
    return (status);
}
