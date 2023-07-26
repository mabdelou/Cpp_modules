/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 09:09:34 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 09:54:40 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H__
# define ANIMAL_H__

# include <iostream> 

class Animal
{
    protected:
        std::string type;
    public:
        //Constructors and destructors  and copy assinment operator overloading
        
        Animal();
        Animal(const Animal &obj);
        virtual Animal &operator = (const Animal &obj);
        virtual ~Animal();
            // i uae virtual in deconstructor couse i want it called when i delete obj_ptr
        //getter function
        std::string getType(void) const; 
            //note: i use const in final couse i have const obj in main so i can just read value
        //member function
        virtual void makeSound(void) const;
            //i use virtual couse i have member function in derived class have the same name so i 
            // overiding derived member function and let it work using virtual
};

#endif