/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 22:29:11 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/10 15:52:36 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"



void ClapTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0)
    {
        --this->Energy_point;
        std::cout << "ClapTrap " << this->Name << " attacks " << target;
        std::cout << " , causing " << this->Attack_damage << " points of damage!" <<std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    (void) amount;
    if (this->Hit_points - amount > 0)
            this->Hit_points  -= amount;
        else
            this->Hit_points  = 0;
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    (void) amount;
    if(this->Energy_point > 0)
    {
        --this->Energy_point;
        if (this->Hit_points + amount > 10)
            this->Hit_points  = 10;
        else
            this->Hit_points  += amount;
    }
}



ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
   this->Name = "";
    Hit_points = 10;
    Energy_point = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &Name)
{
    std::cout << "Parameter constructor called" << std::endl;
    this->Name = Name;
    Hit_points = 10;
    Energy_point = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}