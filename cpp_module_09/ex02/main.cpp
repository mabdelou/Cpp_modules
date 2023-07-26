/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:47:00 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:47:01 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main (int argc, char **argv)
{
    try
    {
        if(argc == 1)
            throw(C_RED + (std::string)"bad argumment" + C_WHITE);
        PmergeMe PM(argv);
        {
            PM.GetDiffTime(0,"std::vector");
            PM.VecSortFun();
            PM.GetDiffTime(1,"std::vector");
        }
        {
            PM.GetDiffTime(0,"std::list");
            PM.ListSortFun();
            PM.GetDiffTime(1,"std::list");
        }
    }
    catch(std::string const str)
    {
        std::cout << str << std::endl;
    }
    return(0);
}