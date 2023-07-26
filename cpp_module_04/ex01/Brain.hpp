/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 12:53:05 by mabdelou          #+#    #+#             */
/*   Updated: 2022/09/13 10:49:26 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H__
# define BRAIN_H__

# include <iostream>

class Brain
{
    std::string ideas[100];

    public:
    
        //Constructors and destructors  and copy assinment operator overloading
        
        // std::string str_tst; // need comment
        Brain();
        Brain(const Brain &obj);
        Brain &operator = (const Brain &obj);
        ~Brain();
};

#endif