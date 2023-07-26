/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:28 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/05 09:23:20 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H__
# define HEADER_H__

# include <iostream>
# include <string>

int ft_error(const char *str);
int ft_strlen(const char * str);
int ft_IsNumeric(const int c);
int ft_IsPrint(const int c);
int ft_check_if_fod(const char *str);
int ft_check_parameter(const char *str);

#endif