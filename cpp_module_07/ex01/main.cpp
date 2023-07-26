/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:03:36 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/18 12:43:10 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main ()
{
    int arr[5] = {0,1,2,3,4};
    char arr1[5] = {'a','b','c','d','e'};
    std::string arr2[3]  = {"abc","def","ghi"};
    int length = 5;
    int length1 = 5;
    int length2 = 3;
    std::cout << "-----------(int)------------" << std::endl;
    iter(arr,length,fun<int>);
    std::cout << "-----------(char)-----------" << std::endl;
    
    iter(arr1,length1,fun<char>);
    std::cout << "----------(string)----------" << std::endl;
    iter(arr2,length2,fun<std::string>);
    return (0);
}