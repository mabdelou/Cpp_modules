/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:36:34 by mabdelou          #+#    #+#             */
/*   Updated: 2022/06/20 14:36:36 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    PhoneBook pb;
    std::string prompt;
    int i;
    int index;

    i = -1;
    while(++i < 8)
        pb.get_class()[i].set_status(0);
    i = -1;
    index = -1;
    while(1)
    {            
        std::cin >> prompt;
        if(prompt == "ADD")
        {
            if(i == 7)
                i = -1;
            ft_add_contact(&pb.get_class()[++i], prompt);
        }
        else if(prompt == "SEARCH")
        {
            if(ft_search_spesified(pb.get_class()))
                ft_print_contact(pb.get_class(), index);
        }
        else if(prompt == "EXIT")
            return (0);
    }
}
