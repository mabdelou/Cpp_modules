/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:38:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/09 17:42:48 by mabdelou         ###   ########.fr       */
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

Fixed &Fixed::min(Fixed &obj, Fixed &obj1)
{
	if(obj.toFloat() > obj1.toFloat())
		return (obj1);
	return (obj);
}

const Fixed &Fixed::min(const Fixed &obj, const Fixed &obj1)
{
	if(obj.toFloat() > obj1.toFloat())
	{
		return (obj1);
	}
	return (obj);
}

Fixed &Fixed::max(Fixed &obj, Fixed &obj1)
{
	if(obj.toFloat() > obj1.toFloat())
		return (obj);
	return (obj1);
}

const Fixed &Fixed::max(const Fixed &obj, const Fixed &obj1)
{
	if(obj.toFloat() > obj1.toFloat())
		return (obj);
	return (obj1);
}

//constractor

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_num = 0;
}

Fixed::Fixed(const int fixed_point_value)
{
	fixed_point_num = (fixed_point_value<<fractional_bits); // it the same ==  (fixed_point_value*256)
}

Fixed::Fixed(const float floating_point_value)
{
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


//The 4 arithmetic operators:
Fixed  &Fixed::operator + (const Fixed  &obj)
{
	this->setRawBits(roundf((this->toFloat() + obj.toFloat())*(1<<8)));
	return (*this);
}

Fixed  &Fixed::operator - (const Fixed  &obj)
{
	this->setRawBits(roundf((this->toFloat() - obj.toFloat())*(1<<8)));
	return (*this);
}

Fixed  &Fixed::operator * (const Fixed  &obj)
{
	this->setRawBits(roundf((this->toFloat() * obj.toFloat())*(1<<8)));
	return (*this);
}

Fixed  &Fixed::operator / (const Fixed  &obj)
{
	this->setRawBits(roundf((this->toFloat() / obj.toFloat())*(1<<8)));
	return (*this);
}

//The 6 comparison operators:

bool Fixed::operator > (const Fixed  &obj)
{
	if(this->getRawBits() > obj.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator < (const Fixed  &obj)
{
	if(this->getRawBits() < obj.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator >= (const Fixed  &obj)
{
	if(this->getRawBits() >= obj.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator <= (const Fixed  &obj)
{
	if(this->getRawBits() <= obj.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator == (const Fixed  &obj)
{
	if(this->getRawBits() == obj.getRawBits())
		return (true);
	else
		return (false);
}

bool Fixed::operator != (const Fixed  &obj)
{
	if(this->getRawBits() != obj.getRawBits())
		return (true);
	else
		return (false);
}
// 4 operator for increment/decrement
Fixed &Fixed::operator ++ ()
{
	this->fixed_point_num = roundf((this->toFloat() + (float)1/(1<<8))*(1<<8));
	// roundf for get specify value
	// (float)1/(1<<8) mean 1/256 for  increase or decrease the fixed-point value from the smallest representable 
	// *(1<<8) for transform if from float to fixed_point
	return (*this);
}

Fixed &Fixed::operator -- ()
{
	this->fixed_point_num = roundf((this->toFloat() - (float)1/(1<<8))*(1<<8));
	// roundf for get specify value
	// (float)1/(1<<8) mean 1/256 for  increase or decrease the fixed-point value from the smallest representable 
	// *(1<<8) for transform if from float to fixed_point
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed A;
	
	A = *this;
	this->fixed_point_num = roundf((this->toFloat() + (float)1/(1<<8))*(1<<8));
	// roundf for get specify value
	// (float)1/(1<<8) mean 1/256 for  increase or decrease the fixed-point value from the smallest representable 
	// *(1<<8) for transform if from float to fixed_point
	return (A);
	// there are no wory about delete this obj after function finish executon  couse i return copy of this obj not the same obj
}

Fixed Fixed::operator -- (int)
{
	Fixed  A;
	
	A = *this;
	this->fixed_point_num = roundf((this->toFloat() - (float)1/(1<<8))*(1<<8));
	return (A); 
	// there are no wory about delete this obj after function finish executon  couse i return copy of this obj not the same obj
}

