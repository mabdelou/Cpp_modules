/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:20:14 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 11:38:33 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

/* ******************************* member function ********************************* */

void WrongCat::makeSound(void) const
{
    std::cout << "sound of some Cat" << std::endl;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
    this->type = obj.type;
    std::cout << "WrongCat copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator = (const WrongCat &obj)
{
    this->type = obj.type;
    std::cout << "WrongCat copy assinment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructors called" << std::endl;
}

