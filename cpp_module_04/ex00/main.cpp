/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:03:07 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 09:08:16 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main (void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    return (0);
}

// int main (void)
// {
//     Animal a;
//     Dog d;
//     Cat c;
//     const Animal* meta = new Animal(a);
//     const Animal* j = new Dog(d);
//     const Animal* i = new Cat(c);
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete j;
//     delete i;
//     return (0);
// }

// int main(void)
// {
//     const WrongAnimal* meta = new WrongAnimal();
//     const WrongAnimal* i = new WrongCat();
//     std::cout << std::endl;
//     std::cout << meta->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     std::cout << std::endl;
//     meta->makeSound();
//     i->makeSound();
//     std::cout << std::endl;
//     delete meta;
//     delete i;
//     // system("leaks Polymorphism");
//     return (0);
// }