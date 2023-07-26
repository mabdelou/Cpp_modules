/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:38:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/09 17:42:20 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::fractional_bits  = 8;

//member functions

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_num);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_num = raw;
}

//constractor

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_num = 0;
}

Fixed::Fixed(Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_num = obj.getRawBits();
}

void Fixed::operator = (Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_num = obj.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
