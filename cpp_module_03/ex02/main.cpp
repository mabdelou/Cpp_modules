/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:29:13 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/10 18:46:03 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
    FragTrap A;
    FragTrap B("Clap");
    FragTrap C(B);
    FragTrap D;
    D = FragTrap("Trap");
    A.attack("unnown");
    B.attack("unnown");
    C.attack("unnown");
    D.attack("unnown");
    
    return (0); 
}

// int main (void)
// {
//     FragTrap A("A");
//     ClapTrap B("B");
    
//     // FragTrap A("A");
//     // FragTrap B("B");
//     for (int a = 0 ; a < 51 ; a++)
//     {
//         A.attack("B");
//         std::cout << "------------------" << std::endl;
//         B.takeDamage(20);
//         B.attack("A");
//         std::cout << "------------------" << std::endl;
//         A.takeDamage(20);
//         std::cout << "*******************" << std::endl;
//     }
//     return (0); 
// }

// int main (void)
// {
//     FragTrap A("A");
//     FragTrap B("B");
//     ClapTrap C("C");
//     ClapTrap D;
//     D = ClapTrap("D");
    
//     // FragTrap C("C");
//     // FragTrap D;
//     // D = FragTrap("D");
//     for (int a = 0 ; a < 51 ; a++)
//     {
//         A.attack("B");
//         std::cout << "------------------" << std::endl;
//         B.takeDamage(20);
//         B.beRepaired(20);
//         B.attack("A");
//         std::cout << "------------------" << std::endl;
//         A.takeDamage(20);
//         A.beRepaired(20);
//         C.attack("D");
//         std::cout << "------------------" << std::endl;
//         D.takeDamage(20);
//         D.beRepaired(20);
//         D.attack("C");
//         std::cout << "------------------" << std::endl;
//         C.takeDamage(20);
//         C.beRepaired(20);
//         std::cout << "*******************" << std::endl;
//     }
//     A.highFivesGuys();
//     return (0); 
// }