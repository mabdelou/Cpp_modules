/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:47:10 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:47:11 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEMERGEME_H__
# define PEMERGEME_H__

# include <iostream>
# include <vector>
# include <list>
# include <string>
# include <algorithm>
# include <ctime>
# include <iomanip>
# include <sys/time.h>
# define C_BLUE "\e[38;2;20;200;235m"
# define C_PURPLE "\e[38;2;174;21;235m"
# define C_RED "\e[38;2;235;43;21m"
# define C_WHITE "\e[38;2;235;255;255m"

class PmergeMe
{
    public:
        PmergeMe(char **str);
        PmergeMe(PmergeMe const &obj);
        ~PmergeMe();
        void VecSortFun();
        void ListSortFun();
        void GetDiffTime(int,std::string);
    private:
        std::vector<int> vec;
        int num_of_args;
        int num_of_coupl;
};

#endif