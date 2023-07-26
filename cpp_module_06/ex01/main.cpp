/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:25 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/05 10:24:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main (int argc, char **argv)
{
    Data *A = new Data;
    uintptr_t a = serialize(A);
    Data *B = deserialize(a);
    if(argc != 2)
        return (ft_error("bad number of argumment"));
    A->number = atoi(argv[1]);
    std::cout << "*-------------------------------------------------*" << std::endl;
    std::cout << "| unsigned int of data pointer  | "  << a << std::endl;
    std::cout << "*------------------------------------------------------------------------*" << std::endl;
    std::cout << "| origin data pointer           | "  << A << "  | number value  | " << A->number  << std::endl;
    std::cout << "*------------------------------------------------------------------------*" << std::endl;
    std::cout << "| new data pointer              | "  << B << "  | number value  | " << B->number << std::endl;
    std::cout << "*------------------------------------------------------------------------*" << std::endl;
    
    return(0);
}