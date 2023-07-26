/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:01:20 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 09:52:03 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H__
# define ScavTrap_H__

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //constarctors && copy assiment operator overloading
        
        ScavTrap();
        ScavTrap(const std::string &Name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap &operator = (const ScavTrap &obj);
        ~ScavTrap();
        
        //member functions
        void attack(const std::string& target);
        void guardGate(void);
        
};

#endif