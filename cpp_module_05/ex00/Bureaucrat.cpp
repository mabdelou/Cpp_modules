/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:57:13 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:29:44 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************************ getter ************************************ */

std::string Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

/* ********************************* what overriding ******************************* */

//i use _NOEXCEPT for told compiler that overrid function  will never trow any exception
// we can use trow() instead of _NOEXCEPT
const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return ("Bureaucrat garde too high");
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return ("Bureaucrat garde too low");
}

/* ******************************* member function ********************************* */

void Bureaucrat::incrementGarde(void)
{
    if((this->_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1;
}

void Bureaucrat::decrementGarde(void)
{
    if((this->_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Bureaucrat::Bureaucrat() : _name("unKnown") , _grade(150)
{
    if(_grade > 150)
       throw Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
    if(_grade > 150)
      throw  Bureaucrat::GradeTooLowException();
    else if (_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name) , _grade(obj._grade)
{
    std::cout << "Bureaucrat copy Constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj)
{
    this->_grade = obj.getGrade();
    std::cout << "Bureaucrat copy assinment operator called" << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructors called" << std::endl;
}

 /* ***************************** operator overloading  ******************************* */

std::ostream &operator << (std::ostream &os, const Bureaucrat &obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;

    return (os);
}
