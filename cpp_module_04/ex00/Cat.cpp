/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:46:10 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 11:33:52 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ******************************* member function ********************************* */

void Cat::makeSound(void) const
{
    std::cout << "sound of some Cat" << std::endl;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    this->type = obj.type;
    std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &obj)
{
    this->type = obj.type;
    std::cout << "Cat copy assinment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructors called" << std::endl;
}

