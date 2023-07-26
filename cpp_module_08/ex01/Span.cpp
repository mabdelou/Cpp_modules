/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:36:43 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 15:06:50 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    std::cout << "default constructor called" << std::endl;
    throw("need more then 1");
}

Span::Span(unsigned int N)
{
    std::cout << "parameter constructor called" << std::endl;
    if (N < 2)
        throw("need more then 1");
    vec.reserve(N);
    vec_size = N;
}

Span::Span(const Span &obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->vec = obj.vec;
}

Span &Span::operator = (const Span &obj)
{
    std::cout << "copy assigment operator called" << std::endl;
    this->vec = obj.vec;
    return (*this);
}

Span::~Span()
{
    std::cout << "deconstructor called" << std::endl;
}

void Span::addNumber(int num)
{
    if(std::find(this->vec.begin(), this->vec.end(), num) != this->vec.end())
        throw("this number already exists");
    if(this->vec.size() > this->vec_size)
        throw ("the capacity is too low");
    this->vec.push_back(num);
}

int Span::shortestSpan(void)
{
    if(this->vec.size() < 2)
        throw("size of span vector is less then 2");
    int shortest = abs(vec[0] - vec[1]);
    for(unsigned int a = 0; a < this->vec.size(); a++)
    {
        for(unsigned int b = a+1; b < this->vec.size(); b++)
        {
            if(abs(vec[a] - vec[b]) < shortest)
                shortest = abs(vec[a] - vec[b]);
        }
    }
    return (shortest);
}

int Span::longestSpan(void)
{
    int longest = 0;
    if(this->vec.size() < 2)
        throw("size of span vector is less then 2");
    for(unsigned int a = 0; a < this->vec.size(); a++)
    {
        for(unsigned int b = 0; b < this->vec.size(); b++)
        {
            if(abs(vec[a] - vec[b]) > longest)
                longest = abs(vec[a] - vec[b]);
        }
    }
    return (longest);
}