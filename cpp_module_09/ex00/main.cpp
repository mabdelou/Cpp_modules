/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:31 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:45:32 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
    try
    {
        BitcoinExchange bc;
        if(argc != 2)
            throw(C_RED + (std::string)"bad argumment" C_WHITE);
        bc.GetBitcoinValue(argv[1]);
    }
    catch(std::string const str)
    {
        std::cout << str << std::endl;
    }
    return(0);
}