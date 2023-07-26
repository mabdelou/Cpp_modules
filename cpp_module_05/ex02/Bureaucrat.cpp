/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:37:55 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:38:59 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"
/* ************************************ getters ************************************ */

std::string Bureaucrat::getName(void) const
{
    return (_name);
}

int Bureaucrat::getGrade(void) const
{
    return (_grade);
}

/* ********************************* what overriding ******************************* */

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

void Bureaucrat::signForm(Form &obj) const
{
    bool Fsigne = obj.getForm_signe();
    int grade =  this->getGrade();
    std::string Bname = this->getName();
    std::string Fname = obj.getFormname();
    int FGE = obj.getForm_garde_execute();
    
    try
    {
        if(FGE < grade || grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << Bname << " couldn't sign " << Fname;
        std::cout << " because " << e.what() << std::endl;
    }
    try
    {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << Bname << " couldn't sign " << Fname;
        std::cout << " because " << e.what() << std::endl;
    }
    if (Fsigne == true && (grade > 0 && grade < 151) && FGE >= grade)
        std::cout << Bname << " signed " << Fname << std::endl;
}

int Bureaucrat::executeForm(Form const &obj) const
{
    bool Fsigne = obj.getForm_signe();
    int grade =  this->getGrade();
    std::string Bname = this->getName();
    std::string Fname = obj.getFormname();
    int FGE = obj.getForm_garde_execute();
    
    try
    {
        if(FGE < grade || grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << Bname << " couldn't sign " << Fname;
        std::cout << " because " << e.what() << std::endl;
    }
    try
    {
        if(grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << Bname << " couldn't sign " << Fname;
        std::cout << " because " << e.what() << std::endl;
    }
    if (Fsigne == true && (grade > 0 && grade < 151) && FGE >= grade)
    {
        std::cout << Bname << " executed " << Fname << std::endl;
        return (0);
    }
    return (-1);
}

/* ***** Constructors and destructors  and copy assinment operator overloading ***** */

Bureaucrat::Bureaucrat() : _name("unKnown") , _grade(150)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade)
{
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
    os << "---------------------------------------" << std::endl;
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;

    return (os);
}
