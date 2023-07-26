/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:33:51 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/12 16:38:32 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H__
# define INTERN_H__

# include "Form.hpp"

class Form;

class Intern
{
  
    public:

        Intern();
        ~Intern();
        Form *makeForm(std::string Fname, std::string T);
};

#endif
