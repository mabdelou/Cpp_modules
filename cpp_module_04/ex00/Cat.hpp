/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:12:47 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 13:54:24 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
# define CAT_H__

# include <iostream> 
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        //Constructors and destructors  and copy assinment operator overloading
     
        Cat();
        Cat(const Cat &obj);
        Cat &operator = (const Cat &obj);
        ~Cat();
        //member function
        
        void makeSound(void) const;
};

#endif