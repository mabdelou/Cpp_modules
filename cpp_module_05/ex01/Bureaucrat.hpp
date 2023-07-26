/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:33:15 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:34:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef  BUREAUCRAT_H__
# define BUREAUCRAT_H__

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
    
        const std::string _name;
        int _grade;
    
    public:
    
        //Constructors and destructors  and copy assinment operator overloading
        
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator = (const Bureaucrat &obj);
        ~Bureaucrat();
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };

        //getter function
        
        std::string getName(void) const;
        int getGrade(void) const;
        
        //member function
        void incrementGarde(void);
        void decrementGarde(void);
        void signForm(Form &obj) const;
};

    std::ostream &operator << (std::ostream &os, const Bureaucrat &obj);

#endif