/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:28 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/05 10:23:57 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H__
# define CONVERSION_H__

# include <iostream>
# include <string>
# include <cctype>
# include <iomanip>

typedef struct t_Data
{
    int number;
}Data;

int ft_error(const char *str);
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif