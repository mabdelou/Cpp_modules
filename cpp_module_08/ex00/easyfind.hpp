/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:14:09 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 13:36:05 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H__
# define EASYFIND_H__

#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include <string>

template<typename T>
void easyfind(T prmt1,int prmt2)
{
    typename T::iterator it = std::find(begin(prmt1), end(prmt1), prmt2);
    
        if(it != prmt1.end())
        {
            std::cout << "second parameter found" << std::endl;
            return ;
        }
    throw("second parameter not found");
}

#endif