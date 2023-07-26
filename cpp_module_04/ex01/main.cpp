/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:03:07 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 14:05:58 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// int main (void)
// {
//     Animal **Half;
    
//     Half = new Animal*[10];
//     for(int a = 0 ; a < 10 ; a++)
//     {
//         if(a < 5)
//             Half[a] = new Dog;
//         else
//             Half[a] = new Cat;
//     }
//     Dog b;
    
//     Dog a(b);
    
//     for(int a = 0 ; a < 10 ; a++)
//         Half[a]->makeSound();
//     for(int a = 0 ; a < 10 ; a++)
//         delete Half[a];
//     delete Half;
//     // system("leaks Polymorphism");
//     return (0);
// }

// int main (void)
// {
//     Cat C;
//     Dog D;
    
//     Cat Copy_C(C);
//     Dog Copy_D(D);
    
//     std::cout << "C " << C.tst->str_tst << std::endl;
//     std::cout << "D " << D.tst->str_tst << std::endl;
//     std::cout << "------------------" << std::endl;
//     std::cout << "Copy_C " << Copy_C.tst->str_tst << std::endl;
//     std::cout << "Copy_D " << Copy_D.tst->str_tst << std::endl;
//     return (0);
// }

int main()
{
    Dog basic;
    {
        Dog tmp(basic);
    }
    system("leaks Polymorphism");
    return (0);
}