/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:28 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/15 12:44:59 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H__
# define BASE_H__

# include <iostream>
# include <string>

class Base
{
    public:
        virtual ~Base();
};

void identify(Base& p);
void identify(Base* p);
Base * generate(void);

#endif
