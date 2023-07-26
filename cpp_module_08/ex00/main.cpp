/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:13:42 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 13:37:15 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
    std::array<int,7> arr = {10,2,3,512,4,5,-312};
    // std::vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(2);
    // arr.push_back(3);
    // arr.push_back(512);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(-312);
    try
    {
        easyfind(arr,101);
    }
    catch(const char *s)
    {
        std::cout << s << std::endl;
    }
    return (0);
}