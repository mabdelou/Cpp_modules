/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:13:07 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 10:28:23 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H__
# define WRONGANIMAL_H__

# include <iostream> 

class WrongAnimal
{
    protected:
        std::string type;
    public:
        //Constructors and destructors  and copy assinment operator overloading
        
        WrongAnimal();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal &operator = (const WrongAnimal &obj);
        ~WrongAnimal();
        //getter function
        std::string getType(void) const;
        //member function
        void makeSound(void) const;
};

#endif