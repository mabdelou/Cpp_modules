/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:47:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 11:33:48 by mabdelou         ###   ########.fr       */
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
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
    this->type = obj.type;
    std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj)
{
    this->type = obj.type;
    std::cout << "Dog copy assinment operator called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructors called" << std::endl;
}
