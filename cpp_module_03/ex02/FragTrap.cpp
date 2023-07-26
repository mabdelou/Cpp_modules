/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:29:10 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 08:58:33 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::highFivesGuys(void)
{
    std::cout << "\tFragTrap positive high fives " << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "\tFragTrap Default constructor called" << std::endl;
    this->Name = "";
    Hit_points = 100;
    Energy_point = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &Name) : ClapTrap(Name)
{
    std::cout << "\tFragTrap Parameter constructor called" << std::endl;
    this->Name = Name;
    Hit_points = 100;
    Energy_point = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
    std::cout << "\tFragTrap Copy constructor called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
}

FragTrap &FragTrap::operator = (const FragTrap &obj) 
{
    std::cout << "\tFragTrap Copy assignment operator called" << std::endl;
    this->Name = obj.Name;
    this->Hit_points = obj.Hit_points;
    this->Energy_point = obj.Energy_point;
    this->Attack_damage = obj.Attack_damage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "\tFragTrap Destructor called" << std::endl;
}