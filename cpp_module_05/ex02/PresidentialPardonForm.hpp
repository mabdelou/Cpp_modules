/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:38:12 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 15:43:13 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H__
# define PRESIDENTIALPARDONFORM_H__

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm:  public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &obj);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &obj);
        ~PresidentialPardonForm();
        
        void execute(Bureaucrat const & executor);
        std::string get_Target(void) const;
        
};  

#endif