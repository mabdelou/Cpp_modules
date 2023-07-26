/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:24:24 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/09 15:08:30 by mabdelou         ###   ########.fr       */
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
		//member function == method
		
			//getter and setter
		int getRawBits( void ) const;
		void setRawBits( int const raw );
			//member functions
		float toFloat( void ) const;
		int toInt( void ) const;
		// const it mean the function can only read members
};
	/* i declare operator overloading here  not in class couse if i declare inside class the operator will have 3 parameter (3rd prameter is this_ptr) 
		and that will give me error in compile time so for that i initialise operator overloading function outside class
		*/
	std::ostream& operator << (std::ostream &os, const Fixed &obj);


#endif
