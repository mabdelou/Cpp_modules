/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:36:18 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/21 20:51:43 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(10);
        
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.vec[0] << std::endl;
        std::cout << sp.vec[1] << std::endl;
        std::cout << sp.vec[2] << std::endl;
        std::cout << sp.vec[3] << std::endl;
        std::cout << sp.vec[4] << std::endl;
        std::cout << "-----------------" << std::endl;
        std::cout << "short : " << sp.shortestSpan() << std::endl;
        std::cout << "long : " << sp.longestSpan() << std::endl;
        std::cout << "-----------------" << std::endl;
    }
    catch(const char *s)
    {
        std::cout << s << std::endl;
    }
    return (0);
}

// int main ()
// {
//     try
//     {
//         Span sp = Span(10);
//         std::vector<int>::iterator it;
        
//         sp.addNumber(65);
//         sp.addNumber(25);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         // sp.addNumber(650);
//         // sp.addNumber(250);
//         // sp.addNumber(170);
//         // sp.addNumber(90);
//         // sp.addNumber(110);
//         // sp.addNumber(900);
        
//         std::vector<int> arr;
//         arr.push_back(1);
//         arr.push_back(2);
//         arr.push_back(3);
//         arr.push_back(4);
//         arr.push_back(5);
//         // arr.push_back(6);
//         sp.addNumbers(begin(arr),end(arr));
//         it = end(sp.vec);
//         for(std::vector<int>::iterator itt = begin(sp.vec);itt < it; itt++)
//         {
//             std::cout << *itt << std::endl;
//         }
//         std::cout << "-----------------" << std::endl;
//         std::cout << "short : " << sp.shortestSpan() << std::endl;
//         std::cout << "long : " << sp.longestSpan() << std::endl;
//         std::cout << "-----------------" << std::endl;
//     }
//     catch(const char *s)
//     {
//         std::cout << s << std::endl;
//     }
//     return (0);
// }

// int main ()
// {
//     try
//     {
//         Span sp = Span(10);
//         std::vector<int>::iterator it;
        
//         sp.addNumber(65);
//         sp.addNumber(25);
//         sp.addNumber(17);
//         sp.addNumber(9);
//         sp.addNumber(11);
//         // sp.addNumber(650);
//         // sp.addNumber(250);
//         // sp.addNumber(170);
//         // sp.addNumber(90);
//         // sp.addNumber(110);
//         // sp.addNumber(900);
        
//         std::deque<int> arr;
//         arr.push_back(1);
//         arr.push_back(2);
//         arr.push_back(3);
//         arr.push_back(4);
//         arr.push_back(5);
//         // arr.push_back(6);
//         sp.addNumbers(begin(arr),end(arr));
//         it = end(sp.vec);
//         for(std::vector<int>::iterator itt = begin(sp.vec);itt < it; itt++)
//         {
//             std::cout << *itt << std::endl;
//         }
//         std::cout << "-----------------" << std::endl;
//         std::cout << "short : " << sp.shortestSpan() << std::endl;
//         std::cout << "long : " << sp.longestSpan() << std::endl;
//         std::cout << "-----------------" << std::endl;
//     }
//     catch(const char *s)
//     {
//         std::cout << s << std::endl;
//     }
//     return (0);
// }


// int main ()
// {
//     try
//     {
//         Span sp = Span(10000);
//         srand(time(0));
//         for(int a = 0; a<10000; a++)
//         {
//             sp.addNumber(rand());
//         }
//         std::cout << "-----------------" << std::endl;
//         std::cout << "short : " << sp.shortestSpan() << std::endl;
//         std::cout << "long : " << sp.longestSpan() << std::endl;
//         std::cout << "-----------------" << std::endl;
//     }
//     catch(const char *s)
//     {
//         std::cout << s << std::endl;
//     }
//     return (0);
// }