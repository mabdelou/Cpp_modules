/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:45:55 by mabdelou          #+#    #+#             */
/*   Updated: 2023/05/02 08:50:26 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string const &str)
{
    int first_tow=0,number_count=0,operation_count=0;
    std::string c,empty;
    std::stack<int> to_swap;
    std::stringstream sstream(str);
    while(sstream >> c)
    {
        if(first_tow++ < 2)
            if (c[0] < '0' || c[0] > '9')
                throw(empty + C_RED + "Eroor" + C_WHITE);
        if (c[0] < '0' || c[0] > '9')
            number_count++;
        else
            operation_count++;
        if(c.length() > 1)
            throw(empty + C_RED + "Eroor" + C_WHITE);
        else if ((c[0] < '0' || c[0] > '9')
                && c[0] != '+' && c[0] != '-'
                && c[0] != '/' && c[0] != '*')
            throw(empty + C_RED + "Eroor" + C_WHITE);
        to_swap.push(ToNumber(c[0]));
    }
    if(number_count + 1 != operation_count)
        throw(empty + C_RED + "Eroor" + C_WHITE);
    for(;!to_swap.empty();)
    {
        stackA.push(to_swap.top());
        to_swap.pop();
    }
}
RPN::RPN(RPN const &obj) : stackA(obj.stackA)
{

}
RPN::~RPN()
{

}

int RPN::ToNumber(int num)
{
    return((num>=48 && num<=57) ? num-48 :num);
}
int RPN::ToChar(int num)
{
    return((num>=0 && num<=9) ? num+48 : num);
}
void RPN::CalcFun()
{
    std::stack<int> stackB;
    std::string empty;
    char c;
    int a=0,first=0,secound=0;
    for(a=stackA.size();a != 0;a=stackA.size())
    {
        if(stackA.top() != '-' && stackA.top() != '+'
            && stackA.top() != '*' && stackA.top() != '/')
        {
            stackB.push(stackA.top());
            stackA.pop();
        }
        else if (stackB.empty())
        {
            stackB.push(stackA.top());
            stackA.pop();
        }
        else
        {
            if(stackB.size() < 2)
                throw(empty + C_RED + "Eroor" + C_WHITE);
            first = stackB.top();
            stackB.pop();
            secound = stackB.top();
            stackB.pop();
            c =  stackA.top();
            stackA.pop();
            // std::cout << c << " " << secound << " " << first << std::endl;
            if (c == '-')
            {
                stackA.push(secound - first);
                // std::cout << "4 " << secound - first << std::endl;
            }
            else if (c == '+')
            {
                stackA.push(secound + first);
                // std::cout << "3 " <<secound + first << std::endl;
            }
            else if (c == '*')
            {
                stackA.push(secound * first);
                // std::cout << "2 " << secound * first << std::endl;
            }
            else if (c == '/')
            {
                stackA.push(secound / first);
                // std::cout << "1 " << secound / first << std::endl;
            }
            for(;!stackB.empty();)
            {
                stackA.push(stackB.top());
                stackB.pop();
            }
        }
        std::stack<int> stack_C;
        // std::cout << "stackA"<< std::endl;
        // for(;!stackA.empty();)
        // {
        //     std::cout << stackA.top() << std::endl;
        //     stack_C.push(stackA.top());
        //     stackA.pop();
        // }
        // for(;!stack_C.empty();)
        // {
        //     stackA.push(stack_C.top());
        //     stack_C.pop();
        // }
        // // std::cout << "stackB"<< std::endl;
        // for(;!stackB.empty();)
        // {
        //     std::cout << stackB.top() << std::endl;
        //     stack_C.push(stackB.top());
        //     stackB.pop();
        // }
        // for(;!stack_C.empty();)
        // {
        //     stackB.push(stack_C.top());
        //     stack_C.pop();
        // }

    }
    std::cout << stackB.top() << std::endl;
}