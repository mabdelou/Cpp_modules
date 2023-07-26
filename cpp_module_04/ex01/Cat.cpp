/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:46:10 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 10:49:45 by mabdelou         ###   ########.fr       */
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
    _Brain_ptr = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
    this->type = obj.type;
    *this = obj;
    std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator = (const Cat &obj)
{
    this->type = obj.type;
    this->_Brain_ptr = new Brain();
    std::cout << "Cat copy assinment operator called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete _Brain_ptr;
    std::cout << "Cat destructors called" << std::endl;
}

