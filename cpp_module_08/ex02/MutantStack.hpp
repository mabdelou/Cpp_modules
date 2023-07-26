/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:19:30 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 16:13:46 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H__
# define MUTANTSTACK_H__

#include <iostream>
#include <cstdlib>
#include <algorithm> 
#include <iterator>
#include <stack>
#include <deque>
#include <list>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:

        MutantStack()
        {
            std::cout << "default constructor called" << std::endl;
        }
        MutantStack(const MutantStack &obj)
        {
            (void) obj;
            std::cout << "copy constructor called" << std::endl;
        }
        MutantStack &operator = (const MutantStack &obj)
        {
            (void) obj;
            std::cout << "copy assigment operator called" << std::endl;
        }
        ~MutantStack()
        {
            std::cout << "deconstructor called" << std::endl;
        }
        typedef typename std::deque<T>::iterator iterator;
        
        iterator begin(void)
        {
            return (this->c.begin());
        }
        iterator end(void)
        {
            return (this->c.end());
        }
    
};
#endif