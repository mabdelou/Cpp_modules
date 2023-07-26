/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 14:22:01 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/12 09:53:57 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    for(int a = 0 ; a < 100 ; a++)
        this->ideas[a] = obj.ideas[a];
    std::cout << "Brain copy Constructor called" << std::endl;
}

Brain &Brain::operator = (const Brain &obj)
{
    for(int a = 0 ; a < 100 ; a++)
        this->ideas[a] = obj.ideas[a];
    std::cout << "Brain copy assinment operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructors called" << std::endl;
}
