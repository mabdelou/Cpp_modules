/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:25:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 10:21:42 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************ getter ************************************ */

std::string Animal::getType(void) const
{
    return (type);
}
/* ******************************* member function ********************************* */

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Animal::Animal()
{
    type = "some animal";
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
    this->type = obj.type;
    std::cout << "Animal copy Constructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &obj)
{
    this->type = obj.type;
    std::cout << "Animal copy assinment operator called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructors called" << std::endl;
}
