/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:31 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/05 09:21:41 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"


int ft_error(const char *str)
{
    std::cout << str << std::endl;
    return (1);
}

int ft_strlen(const char * str)
{
    int a = 0;
    
    while(str[++a])
        ;
    
    return (a);
}

int ft_IsNumeric(const int c)
{
    if(c > 47 && c < 58)
        return (1);
    return (0);
}

int ft_IsPrint(const int c)
{
    if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int ft_check_if_fod(const char *str)
{
    int a = -1;

    while(str[++a])
        if(str[a] == '.')
            break;
    if(str[a] == '.')
    {
        while(str[++a])
            if(str[a] != '0' && str[a] != 'f')
                return (-1);
        return (1);
    }
    return (0);
}

int ft_check_parameter(const char *str)
{
    int a = 0;
    if (str[a] == '-' || str[a] == '+')
    {
        a++;
    }
    if(ft_IsNumeric(str[a]))
        return (1);
    else if(ft_IsPrint(str[a]))
        return (2);
    else
        return (3);
}