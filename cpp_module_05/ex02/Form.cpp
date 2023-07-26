/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:37:59 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:58:39 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"
/* ************************************ getters ************************************ */

std::string Form::getFormname(void) const
{
    return (F_name);
}

bool Form::getForm_signe(void) const
{
    return (F_signe);
}

int Form::getForm_gardes_signe(void) const
{
    return (F_garde_signe);
}

int Form::getForm_garde_execute(void) const
{
    return (F_garde_execute);
}

/* ********************************* what overriding ******************************* */

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Form garde too high");
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Form garde too low");
}

/* ******************************* member function ********************************* */

void Form::beSigned(const Bureaucrat &obj)
{
    if(obj.getGrade() < 1)
        throw Form::GradeTooHighException();
    if(obj.getGrade() > 150)
        throw Form::GradeTooLowException();
    else if(this->F_garde_signe < obj.getGrade())
        throw Form::GradeTooLowException();
    if((this->getForm_gardes_signe() >= obj.getGrade()) && obj.getGrade() > 0 && obj.getGrade() < 151)
        this->F_signe = true;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Form::Form() : F_name("unknown") , F_garde_signe(1) , F_garde_execute(1)
{
    F_signe = false;
    std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int garde_signe, unsigned int garde_execute) :
 F_name(name) , F_garde_signe(garde_signe) , F_garde_execute(garde_execute)
{
    F_signe = false;
    std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(const Form &obj) : F_name(obj.F_name) , F_garde_signe(obj.F_garde_signe) ,
 F_garde_execute(obj.F_garde_execute)
{
    F_signe = false;
    std::cout << "Form copy Constructor called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form destructors called" << std::endl;
}

std::ostream &operator << (std::ostream &os,const Form &obj)
{
    os << "FormNmae " << obj.getFormname() << std::endl;
    os << "FormSigne " << obj.getForm_signe() << std::endl;
    os << "FormGardeSigne " << obj.getForm_gardes_signe() << std::endl;
    os << "FormGardeExecute " << obj.getForm_garde_execute() << std::endl;
    os << "---------------------------------------" << std::endl;
    return (os);
}
