/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:36:57 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 20:50:13 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H__
# define SPAN_H__

#include <iostream>
#include <cstdlib>
#include <algorithm> 
#include <cstdlib>
#include <vector>
#include <deque>
#include <string>

// template <class T>
class Span{
    public:
        
        unsigned int vec_size;
        
        //atributs
        
        std::vector<int> vec;
        Span();
        Span(unsigned int N);
        Span(const Span &obj);
        Span &operator = (const Span &obj);
        ~Span();

        //constructrs
        
        void addNumber(int num);
        int shortestSpan(void);
        int longestSpan(void);
        
        //member functions
        
        
        template <typename T>
        void addNumbers(T it, T it1)
        {
            int new_vsize = 0;
            for(T a = it; a < it1; a++)
            {
                ++new_vsize;
            }
            if(new_vsize + this->vec.size() > this->vec_size)
                throw ("the capacity is too low");
            for(T a = it; a < it1; a++)
            {
                if(std::find(this->vec.begin(), this->vec.end(),*a) != this->vec.end())
                    throw("this number already exists");
                this->vec.push_back(*a);
            }
        }
        //template function
};

#endif