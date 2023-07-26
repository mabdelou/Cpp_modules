/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:38:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/09 17:52:30 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//intialise stataic member

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

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point_num/(float)(1<<fractional_bits)); //it the same == ((float)fixed_point_num/(float)256) // 256 == 8 == 1 byte == 256 motaghayir(i7timal)
}
int Fixed::toInt( void ) const
{
	return ((fixed_point_num>>fractional_bits)); //it the same == (fixed_point_num/256)
}

//constractor

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_num = 0;
}

Fixed::Fixed(const int fixed_point_value)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point_num = (fixed_point_value<<fractional_bits); // it the same ==  (fixed_point_value*256)
}

Fixed::Fixed(const float floating_point_value)
{
	std::cout << "Float constructor called" << std::endl;
	// i use roundf couse it help me to get very close intiger to float number (that help me to get very specify number)
	fixed_point_num = round(floating_point_value*(1<<fractional_bits)); // it the same  == round(floating_point_value*256)
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point_num = obj.getRawBits();
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void Fixed::operator = (const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_point_num = obj.getRawBits();
}

std::ostream& operator << (std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return (os);
}