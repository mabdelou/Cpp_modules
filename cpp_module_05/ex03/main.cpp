/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:04 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 17:07:35 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
int main (void)
{
    try
    {
        Bureaucrat a("carl",148);
        Bureaucrat b("jeo",65);
        Bureaucrat c("trump",85);
        Bureaucrat d("obama",4);
        Bureaucrat e;
        
        std::cout << std::endl;
            Intern someRandomIntern;
            Form* rrf;
            rrf = someRandomIntern.makeForm("robotest", "Bender");
            // rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
            // rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            // rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << std::endl;
        
        if(rrf != NULL)
        {
            std::cout << d << *rrf;
                rrf->execute(d);
            std::cout << d << *rrf;
        }
    }
    catch(Bureaucrat::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Form::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Form::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
