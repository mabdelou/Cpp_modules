/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:15:48 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 11:41:09 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* ************************************ getter ************************************ */

std::string WrongAnimal::getType(void) const
{
    return (type);
}
/* ******************************* member function ********************************* */

void WrongAnimal::makeSound(void) const
{
    std::cout << "sound of some wrong animal" << std::endl;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

WrongAnimal::WrongAnimal()
{
    type = "some wrong animal";
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    this->type = obj.type;
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
    this->type = obj.type;
    std::cout << "WrongAnimal copy assinment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructors called" << std::endl;
}
