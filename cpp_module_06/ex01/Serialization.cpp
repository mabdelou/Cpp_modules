/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:31 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/05 13:01:07 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int ft_error(const char *str)
{
    std::cout << str << std::endl;
    return (1);
}


uintptr_t serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}



Data* deserialize(uintptr_t raw)
{
    
    Data *ptr = reinterpret_cast<Data*>(raw);
    return (ptr);
}