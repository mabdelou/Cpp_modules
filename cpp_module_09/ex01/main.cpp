/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:49 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:45:50 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
    try
    {
        if(argc != 2)
            throw(C_RED + (std::string)"bad argumment" + C_WHITE);
        RPN rpn(argv[1]);
        rpn.CalcFun();
    }
    catch(std::string const str)
    {
        std::cout << str << std::endl;
    }
    return(0);
}