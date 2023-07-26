/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:47:07 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:47:08 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **str)
{
    std::string empty;
    int num=0;
    for(int a=1;str[a];a++)
    {
        for(int b=0;str[a][b];b++)
            if (str[a][b] < '0' || str[a][b] > '9')
                throw(empty + C_RED + "Bad number" + C_WHITE);
        num = atoi(str[a]);
        if(num > 3000)
            throw(empty + C_RED + "Big number" + C_WHITE);
        vec.push_back(num);
    }
    std::cout << "Before: ";
    for(std::vector<int>::iterator it  = vec.begin() ;it < vec.end();it++)
    {
        std::cout << (*it);
        if(it+1 != vec.end())
            std::cout << ' ';
    }
    std::cout << std::endl;
}
PmergeMe::PmergeMe(PmergeMe const &obj) : vec(obj.vec)
{

}
PmergeMe::~PmergeMe()
{

}
void PmergeMe::GetDiffTime(int mood, std::string container)
{
    static struct timeval start;
    static struct timeval end;
    double diff;

    if(!mood)
        gettimeofday(&start, NULL);
    else
    {
        gettimeofday(&end, NULL);
        diff = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_usec - start.tv_usec);
        std::cout << "Time to process a range of " << num_of_args << " elements with " <<  container << " : ";
        std::cout << diff << " us" << std::endl;
        return ;
    }
}
void PmergeMe::VecSortFun()
{
    std::vector<int> smalest;
    std::vector<int> largest;

    num_of_args = this->vec.size();
    num_of_coupl = num_of_args / 2;
    if(num_of_args < 3)
    {
        if(num_of_args == 2)
        {
            std::swap(*(vec.begin()), *(vec.end() - 1));
            std::cout <<  "After:  " << *(vec.begin()) << ',' << *(vec.end() - 1) << ']' << std::endl;
        }
        else if (num_of_args == 1)
            std::cout <<  "After:  " << *(vec.begin()) << ']' << std::endl;
        return ;
    }
    for(std::vector<int>::iterator it = this->vec.begin();it < this->vec.end() -1 ;it += 2)
    {
        if(*(it) <= *(it + 1))
        {
            smalest.push_back(*(it));
            largest.push_back(*(it + 1));
        }
        else
        {
            smalest.push_back(*(it + 1));
            largest.push_back(*(it));
        }
    }
    if(num_of_args != num_of_coupl * 2)
        largest.push_back(*(vec.end() - 1));
    std::sort(begin(smalest), end(smalest));
    for(std::vector<int>::iterator it = largest.begin();it < largest.end();it++)
        smalest.insert(std::upper_bound(smalest.begin(),smalest.end(),*(it)),*(it));
    std::cout << "After:  ";
    for(std::vector<int>::iterator it = smalest.begin();it < smalest.end();it++)
        std::cout << *(it) << ' ';
    std::cout << std::endl; 
}
void PmergeMe::ListSortFun()
{
    std::list<int> smalest;
    std::list<int> largest;

    num_of_args = this->vec.size();
    num_of_coupl = num_of_args / 2;
    if(num_of_args < 3)
    {
        if(num_of_args == 2)
            std::swap(*(vec.begin()), *(vec.end() - 1));
        return ;
    }
    for(std::vector<int>::iterator it = this->vec.begin();it < this->vec.end() -1 ;it += 2)
    {
        if(*(it) <= *(it + 1))
        {
            smalest.push_back(*(it));
            largest.push_back(*(it + 1));
        }
        else
        {
            smalest.push_back(*(it + 1));
            largest.push_back(*(it));
        }
    }
    if(num_of_args != num_of_coupl * 2)
        largest.push_back(*(vec.end() - 1));
    smalest.sort();
    for(std::list<int>::iterator it = largest.begin();it != largest.end();it++)
        smalest.insert(std::upper_bound(smalest.begin(),smalest.end(),*(it)),*(it));
}