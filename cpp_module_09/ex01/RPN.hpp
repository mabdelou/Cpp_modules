/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:58 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:45:59 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H__
# define RPN_H__

# include <iostream>
# include <fstream>
# include <string>
# include <sstream>
# include <stack>

# define C_BLUE "\e[38;2;20;200;235m"
# define C_PURPLE "\e[38;2;174;21;235m"
# define C_RED "\e[38;2;235;43;21m"
# define C_WHITE "\e[38;2;235;255;255m"

class RPN
{
    public:
        RPN(std::string const &str);
        RPN(RPN const &obj);
        ~RPN();
        void CalcFun();
        int ToNumber(int);
        int ToChar(int);
    private:
        std::stack<int> stackA;
};

#endif