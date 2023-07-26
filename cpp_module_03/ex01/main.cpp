/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:29:13 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/10 18:17:52 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void)
{
    ScavTrap A;
    ScavTrap B("Clap");
    ScavTrap C(B);
    ScavTrap D;
    D = ScavTrap("Trap");
    A.attack("unnown");
    B.attack("unnown");
    C.attack("unnown");
    D.attack("unnown");
    
    return (0); 
}

// int main (void)
// {
//     ScavTrap A("A");
//     ClapTrap B("B");
    
//     // ScavTrap A("A");
//     // ScavTrap B("B");
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
//     ScavTrap A("A");
//     ScavTrap B("B");
//     ClapTrap C("C");
//     ClapTrap D;
//     D = ClapTrap("D");
    
//     // ScavTrap C("C");
//     // ScavTrap D;
//     // D = ScavTrap("D");
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
//     A.guardGate();
//     return (0); 
// }