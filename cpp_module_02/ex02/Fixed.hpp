/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:24:24 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/09 17:17:14 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H__
# define Fixed_H__

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point_num;
		static int fractional_bits;
	public:
		//constractors
		Fixed();
		Fixed(const int fixed_point_value);
		Fixed(const float floating_point_value);
		Fixed(const Fixed &obj);
		~Fixed();

		//operator functions && copy assingment operator overloading
		void operator = (const Fixed  &obj);
		//The 4 arithmetic operators:
		Fixed  &operator + (const Fixed  &obj);
		Fixed  &operator - (const Fixed  &obj);
		Fixed  &operator * (const Fixed  &obj);
		Fixed  &operator / (const Fixed  &obj);
		//The 6 comparison operators:
		bool operator > (const Fixed  &obj);
		bool operator < (const Fixed  &obj);
		bool operator >= (const Fixed  &obj);
		bool operator <= (const Fixed  &obj);
		bool operator == (const Fixed  &obj);
		bool operator != (const Fixed  &obj);
		// 4 operator for increment/decrement
		Fixed &operator ++ ();
		Fixed &operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
		//member function == method
		
			//getter and setter
		int getRawBits( void ) const;
		void setRawBits( int const raw );
			//member functions
		float toFloat( void ) const;
		int toInt( void ) const;
		static Fixed &min(Fixed &obj, Fixed &obj1);
		static const Fixed &min(const Fixed &obj, const Fixed &obj1);
		static Fixed &max(Fixed &obj, Fixed &obj1);
		static const Fixed &max(const Fixed &obj, const Fixed &obj1);
		// const it mean the function can only read members
};
	/* i declare operator overloading here  not in class couse if i declare inside class the operator will have 3 parameter (3rd prameter is this_ptr) 
		and that will give me error in compile time so for that i initialise operator overloading function outside class
		*/
	std::ostream& operator << (std::ostream &os, const Fixed &obj);
	

#endif
