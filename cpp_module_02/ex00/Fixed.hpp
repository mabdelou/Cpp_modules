/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:24:24 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/08 20:26:04 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_H__
# define Fixed_H__

#include <iostream>

class Fixed
{
	private:
		int fixed_point_num;
		static int fractional_bits;
	public:
		//constractors
		Fixed();
		Fixed(Fixed &obj);
		void operator = (Fixed  &obj);
		~Fixed();

		//member function == method
		int getRawBits( void ) const;
		void setRawBits( int const raw );


};



#endif
