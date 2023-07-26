/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:29:08 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/10 17:36:28 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H__
# define ClapTrap_H__

# include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int Hit_points;
        int Energy_point;
        int Attack_damage;
    public:
        //constarctors && copy assiment operator overloading
        
        ClapTrap();
        ClapTrap(const std::string &Name);
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator = (const ClapTrap &obj);
        ~ClapTrap();
        
        //member functions
             void attack(const std::string& target);
             void takeDamage(unsigned int amount);
             void beRepaired(unsigned int amount);
        
};

#endif