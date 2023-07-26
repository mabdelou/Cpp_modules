/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:14 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:16:05 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

std::string RobotomyRequestForm::get_Target(void) const
{
    return (this->target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)
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
    {
        srand(time(0));
        int a = rand() % 2;
        if(a == 1)
            std::cout << this->target << " has been robotomized successfully" << std::endl;
        else
             std::cout << "robotomy failed" << std::endl;
    }
}


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequest",72,45)
{
    target = "Unknown";
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest",72,45)
{
    this->target = target;
    std::cout << "RobotomyRequestForm parameter constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form("RobotomyRequest",72,45)
{
    this->target = obj.get_Target();
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &obj)
{
    this->target = obj.get_Target();
    std::cout << "RobotomyRequestForm copy assinment operator called" << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
     std::cout << "RobotomyRequestForm destructors called" << std::endl;
}
