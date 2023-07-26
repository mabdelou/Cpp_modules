/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:04 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:19:28 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
int main (void)
{
    try
    {
        Bureaucrat a("carl",1);
        Bureaucrat b("jeo",65);
        Bureaucrat c("trump",85);
        Bureaucrat d("obama",47);
        Bureaucrat e;
        
        std::cout << std::endl;

        // RobotomyRequestForm S_C("poly");
        // PresidentialPardonForm S_C("poly");
        ShrubberyCreationForm S_C("poly");
        
        std::cout << std::endl;
        std::cout << a << S_C;
            S_C.execute(a);
        std::cout << a << S_C;
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