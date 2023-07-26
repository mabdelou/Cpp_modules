/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:57:17 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:31:09 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat a("carl",3);
        Bureaucrat b("jeo",65);
        Bureaucrat c("trump",85);
        Bureaucrat d("obama",1408);
        Bureaucrat e;

        std::cout << std::endl;
        try
        {
            a.incrementGarde();
            a.incrementGarde();
            a.incrementGarde();
            a.incrementGarde();
            a.incrementGarde();
        }
        catch (Bureaucrat::GradeTooHighException & e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            d.decrementGarde();
            d.decrementGarde();
            d.decrementGarde();
        }
        catch (Bureaucrat::GradeTooLowException & e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << a << b << c << d << e;
        std::cout << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooHighException & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}