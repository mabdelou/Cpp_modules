/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:37:41 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/17 16:18:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H__
# define ARRAY_H__

#include <iostream>
#include <string>

template <class T>
class Array
{
    private:
        T *arr;
        int num;
        
    public:
        Array() : num(1)
        {
            arr = new T;
        }
        Array(int n) : num(n)
        {
            arr = new T[n]();
        }
        Array(const Array &obj)
        {
            int n = obj.size();
            this->arr = new T[n]();
            for(int a = 0; a<n; a++)
                this->arr[a] = obj.arr[a];
            this->num = n;
        }
        Array &operator = (const Array &obj)
        {
            int n = obj.size();
            if(this->arr != NULL)
                delete this->arr;
            this->arr = new T[n]();
            for(int a = 0; a<n; a++)
                this->arr[a] = obj.arr[a];
            return (*this);
        }
        // void *operator new[] (size_t size)
        // {
        //     void * p = ::operator new(size);
        //     return (p);
        // }
        T &operator [] (int index)
        {
            if(index < 0 || index >= size())
                throw std::exception();
            return (arr[index]);
        }
        T const &operator [] (int index) const
        {
            if(index < 0 || index >= size())
                throw std::exception();
            return (arr[index]);
        }
        // int size(void)
        // {
        //     int size = sizeof(arr);
        //     int size2 = sizeof(arr[0]);
        //     return (size/size2);
        // }
        int size(void) const
        {
            return (num);
        }
        ~Array()
        {
            delete arr;
        }
};

#endif