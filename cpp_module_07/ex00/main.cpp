/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:53:31 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/06 08:53:04 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main ()
// {
    
//     std::cout << min<int>(5, 6) << std::endl;
//     return (0);
// }

// int main ()
// {
    
//     std::cout << max<int>(5, 6) << std::endl;
//     return (0);
// }

// int main ()
// {
//     int a = 5;
//     int b = 6;
    
//     swap(a, b);

//     std::cout << "a = " << a << "b = " << b << std::endl;
//     return (0);
// }

int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}