/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:37:45 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/17 16:19:04 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     // SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//     // system("leaks Iter");
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }
// int main ()
// {
//     Array<int> numbers(10);
//     numbers[0] = 1;
//     numbers[1] = 3;
//     numbers[2] = 5;
//     numbers[3] = 7;
//     numbers[4] = 9;
//     try
//     {
//         std::cout << numbers[0] << std::endl;
//         std::cout << numbers[1] << std::endl;
//         std::cout << numbers[2] << std::endl;
//         std::cout << numbers[3] << std::endl;
//         std::cout << numbers[4] << std::endl;
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
    
//      return (0);
// }
// int main ()
// {
//     Array<char> numbers(10);
//     numbers[0] = 'a';
//     numbers[1] = 'b';
//     numbers[2] = 'c';
//     numbers[3] = 'd';
//     numbers[4] = 'e';
//     try
//     {
//         std::cout << numbers[0] << std::endl;
//         std::cout << numbers[1] << std::endl;
//         std::cout << numbers[2] << std::endl;
//         std::cout << numbers[3] << std::endl;
//         std::cout << numbers[4] << std::endl;
//     }
//     catch(std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }
    
//      return (0);
// }
int main ()
{
    Array<float> numbers(10);
    numbers[0] = 1.52;
    numbers[1] = 3.56;
    numbers[2] = 5.57;
    numbers[3] = 7.58;
    numbers[4] = 9.59;
    try
    {
        std::cout << numbers[0] << std::endl;
        std::cout << numbers[1] << std::endl;
        std::cout << numbers[2] << std::endl;
        std::cout << numbers[3] << std::endl;
        std::cout << numbers[4] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}