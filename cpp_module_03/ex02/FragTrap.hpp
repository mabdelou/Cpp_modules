/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:29:07 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/11 08:58:37 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H__
# define FragTrap_H__

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    protected:
    public:
        //constarctors && copy assiment operator overloading
        
        FragTrap();
        FragTrap(const std::string &Name);
        FragTrap(const FragTrap &obj);
        FragTrap &operator = (const FragTrap &obj);
        ~FragTrap();
        
        //member functions
        
        void highFivesGuys(void);
};

#endif