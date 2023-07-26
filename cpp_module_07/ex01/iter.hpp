/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:03:39 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/17 16:19:45 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H__
# define ITER_H__

# include <iostream>
#include <string>

template <typename T>
void fun(T const &a)
{
    std::cout << "-->          " << a << std::endl;
}

template <typename it, typename L, typename F>
void iter(it adrs, L length, F fun1)
{
    for(L a = 0; a < length; a++)
        fun1(adrs[a]);
}


#endif