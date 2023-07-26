/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:29:13 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/10 15:56:24 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
    ClapTrap A;
    ClapTrap B("Clap");
    ClapTrap C(B);
    ClapTrap D;
    D = ClapTrap("Trap");
    A.attack("unnown");
    B.attack("unnown");
    C.attack("unnown");
    D.attack("unnown");
    
    return (0); 
}

// int main (void)
// {
//     ClapTrap A("A");
//     ClapTrap B("B");
//     ClapTrap C("C");
//     ClapTrap D;
//     D = ClapTrap("D");
//     for (int a = 0 ; a < 11 ; a++)
//     {
//         A.attack("B");
//         std::cout << "------------------" << std::endl;
//         B.takeDamage(0);
//         B.attack("A");
//         std::cout << "------------------" << std::endl;
//         A.takeDamage(0);
//         C.attack("D");
//         std::cout << "------------------" << std::endl;
//         D.takeDamage(0);
//         D.attack("C");
//         std::cout << "------------------" << std::endl;
//         C.takeDamage(0);
//         std::cout << "*******************" << std::endl;
//     }
//     return (0); 
// }

// int main (void)
// {
//     ClapTrap A("A");
//     ClapTrap B("B");
//     ClapTrap C("C");
//     ClapTrap D;
//     D = ClapTrap("D");
//     for (int a = 0 ; a < 11 ; a++)
//     {
//         A.attack("B");
//         std::cout << "------------------" << std::endl;
//         B.takeDamage(0);
//         B.beRepaired(0);
//         B.attack("A");
//         std::cout << "------------------" << std::endl;
//         A.takeDamage(0);
//         A.beRepaired(0);
//         C.attack("D");
//         std::cout << "------------------" << std::endl;
//         D.takeDamage(0);
//         D.beRepaired(0);
//         D.attack("C");
//         std::cout << "------------------" << std::endl;
//         C.takeDamage(0);
//         C.beRepaired(0);
//         std::cout << "*******************" << std::endl;
//     }
//     return (0); 
// }