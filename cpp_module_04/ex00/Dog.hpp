/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:14:07 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 10:45:15 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H__
# define Dog_H__

# include <iostream> 
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        //Constructors and destructors  and copy assinment operator overloading

        Dog();
        Dog(const Dog &obj);
        Dog &operator = (const Dog &obj);
        ~Dog();
        //member function
        
        void makeSound(void) const;
};

#endif