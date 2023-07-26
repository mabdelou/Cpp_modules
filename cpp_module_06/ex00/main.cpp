/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:25 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/13 11:25:36 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void type_is_number(const char *argv)
{
    if (ft_IsPrint(std::atoi(argv)))
        std::cout << "char: '" << static_cast<char>(std::atoi(argv)) << "'" <<std::endl;
    else
        std::cout << "char: Non displayable" <<std::endl;
    std::cout << "int: " << static_cast<int>(std::atoi(argv)) <<std::endl;
    if(ft_check_if_fod(argv) < 0)
    {
        std::cout << "float: " << static_cast<float>(std::atof(argv)) << 'f' << std::endl;
        std::cout << "double: " << static_cast<double>(std::atof(argv)) << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(std::atof(argv)) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(std::atof(argv)) << ".0" << std::endl;
    }
}

void type_is_string(const char *argv)
{
    if(ft_strlen(argv) > 1)
    {
        if(!strcmp(argv,"nan")  || !strcmp(argv,"nanf"))
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: nanf" << std::endl;
            std::cout << "double: nan" << std::endl;
        }
        else if (!strcmp(argv,"-inf")  || !strcmp(argv,"-inff"))
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }
        else if (!strcmp(argv,"+inf")  || !strcmp(argv,"+inff"))
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }
    }
    else
    {
        std::cout << static_cast<int>(argv[0]) << std::endl;
        if (ft_IsPrint(static_cast<char>(argv[0])))
            std::cout << "char: '" << static_cast<char>(argv[0]) << "'" <<std::endl;
        else
            std::cout << "char: Non displayable" <<std::endl;
        std::cout << "int: " << static_cast<int>(argv[0]) <<std::endl;
        std::cout << "float: " << static_cast<float>(argv[0])<< ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(argv[0]) << ".0" << std::endl;
    }
}

int main (int argc, char **argv)
{
    int _type;
    if (argc != 2)
        return (ft_error("bad number of argumment"));
    _type = ft_check_parameter(argv[1]);
    if(_type == 1)
        type_is_number(argv[1]);
    else if (_type == 2)
        type_is_string(argv[1]);
    else
        return (ft_error("this character is not displayable"));
    return (0);
}