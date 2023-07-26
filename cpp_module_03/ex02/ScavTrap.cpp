/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:01:24 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 08:58:55 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    if(this->Energy_point > 0)
    {
        --this->Energy_point;
        std::cout << "\tScavTrap " << this->Name << " attacks " << target;
        std::cout << " , causing " << this->Attack_damage << " points of damage!" <<std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "\tScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "\tScavTrap Default constructor called" << std::endl;
    this->Name = "";
    Hit_points = 100;
    Energy_point = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &Name) : ClapTrap(Name)
{
    std::cout << "\tScavTrap Parameter constructor called" << std::endl;
    this->Name = Name;
    Hit_points = 100;
    Energy_point = 50;
    Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
    std::cout << "\tScavTrap Copy constructor called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj) 
{
    std::cout << "\tScavTrap Copy assignment operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "\tScavTrap Destructor called" << std::endl;
}