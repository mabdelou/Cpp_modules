/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:12:47 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 13:52:14 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H__
# define CAT_H__

# include <iostream> 
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* _Brain_ptr;
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