/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:33:49 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:34:30 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    std::cout << "Intern constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::makeForm(std::string Fname, std::string Target)
{
    Form *obj = NULL;
    int index = 5;
    std::string arr[3] = {"robotomy request","shrubbery creation","presidential pardon"};
    for(int a = 0 ; a < 3 ; a++)
        if(Fname == arr[a])
            index = a;
    switch (index)
    {
        case 0:
            obj = new RobotomyRequestForm(Target);
            break;
        case 1:
            obj = new ShrubberyCreationForm(Target);
            break;
        case 2:
            obj = new PresidentialPardonForm(Target);
            break;
        default:
            std::cout << "Form name not found" << std::endl;
    }
    return (obj);
}
