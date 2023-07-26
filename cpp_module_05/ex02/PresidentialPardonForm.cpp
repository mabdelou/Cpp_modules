/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:10 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:12:35 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

std::string PresidentialPardonForm::get_Target(void) const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
{
    try
    {
        this->beSigned(executor);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    if(executor.executeForm(*this) == 0)
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon",25,5)
{
    target = "Unknown";
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon",25,5)
{
    this->target = target;
    std::cout << "PresidentialPardonForm parameter constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form("PresidentialPardon",25,5)
{
    this->target = obj.get_Target();
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &obj)
{
    this->target = obj.get_Target();
    std::cout << "PresidentialPardonForm copy assinment operator called" << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
     std::cout << "PresidentialPardonForm destructors called" << std::endl;
}
