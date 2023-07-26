/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:33:09 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:33:44 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
# include "Form.hpp"

int main (void)
{
    try
    {
        Bureaucrat a("carl",4);
        Bureaucrat b("jeo",65);
        Bureaucrat c("trump",85);
        Bureaucrat d("obama",148);
        Bureaucrat e;
        Form E_T_A("E_T_A",10,5);
        
        std::cout << a << E_T_A; 
        try
        {
            E_T_A.beSigned(a);   
        }
        catch (Form::GradeTooHighException & e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (Form::GradeTooLowException & e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            a.signForm(E_T_A);
        }
        catch (Bureaucrat::GradeTooLowException & e)
        {
            std::cout << a.getName() << " couldn't sign " << E_T_A.getFormname();
            std::cout << " because " << e.what() << std::endl;
        }
        catch (Bureaucrat::GradeTooHighException & e)
        {
            std::cout << a.getName() << " couldn't sign " << E_T_A.getFormname();
            std::cout << " because " << e.what() << std::endl;
        }
        std::cout << a << E_T_A; 
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