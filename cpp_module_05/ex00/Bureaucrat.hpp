/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:57:15 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:18:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  BUREAUCRAT_H__
# define BUREAUCRAT_H__

# include <iostream>


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
        
        /*  -> a class that enherate from exception to override "what" function
        
            -> i call this class inside Bureaucrat becouse he told us in subject call 
               this class using that string "Bureaucrat::GradeTooHighException" 
        */
        // this class for grade too high exception
        
        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };
        // this class for grade too low exception
        
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };
        //getter function
        
        std::string getName(void) const;
        int getGrade(void) const;
        //member function
        
        // this member function will increment the garde of Bureaucrat ex:  garde [2] it will garde [1]
        void incrementGarde(void);
        // this member function will ecrement the garde of Bureaucrat ex:  garde [149] it will garde [150]
        void decrementGarde(void);
};
    
    /*  
        i call that override operator outside  Bureaucrat couse the "override operator"
        accept only tow parameter but if we call it inside any class it will pass by default 
        the 3rd parameter it is for "*this" 
    */
    std::ostream &operator << (std::ostream &os, const Bureaucrat &obj);
#endif