/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:18:37 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 13:08:02 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H__
# define WRONGCAT_H__

# include <iostream> 
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        //Constructors and destructors  and copy assinment operator overloading
     
        WrongCat();
        WrongCat(const WrongCat &obj);
        WrongCat &operator = (const WrongCat &obj);
        ~WrongCat();
        //member function
        
        void makeSound(void) const;
};

#endif