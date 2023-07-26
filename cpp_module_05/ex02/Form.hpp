/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:02 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:42:07 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_H__
# define FORM_H__

# include <iostream>
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form
{
    private:
        const std::string F_name;
        bool  F_signe;
        const int F_garde_signe;
        const int F_garde_execute;
    
    public:
    
        //Constructors and destructors  and copy assinment operator overloading
        
        Form();
        Form(std::string name, unsigned int garde_signe, unsigned int garde_execute);
        Form(const Form &obj);
        ~Form();
        
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
        
        std::string getFormname(void) const;
        bool getForm_signe(void) const;
        int getForm_gardes_signe(void) const;
        int getForm_garde_execute(void) const;
        
        //member function
        
        void beSigned(const Bureaucrat &obj);
        virtual void execute(Bureaucrat const & executor) = 0;
};

    std::ostream &operator << (std::ostream &os,const Form &obj);

#endif