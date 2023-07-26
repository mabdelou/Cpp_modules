/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:47:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 13:58:06 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* ******************************* member function ********************************* */

void Dog::makeSound(void) const
{
    std::cout << "sound of some Dog" << std::endl;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Dog::Dog() : Animal()
{
    type = "Dog";
    _Brain_ptr = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    this->type = obj.type;
    this->_Brain_ptr = new Brain();
    std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj)
{
    this->type = obj.type;
    if(this->_Brain_ptr != NULL)
        delete _Brain_ptr;
    this->_Brain_ptr = new Brain();
    std::cout << "Dog copy assinment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete _Brain_ptr;
    std::cout << "Dog destructors called" << std::endl;
}
