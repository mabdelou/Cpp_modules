/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelou <mabdelou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:09:31 by mabdelou          #+#    #+#             */
/*   Updated: 2022/10/15 12:45:03 by mabdelou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(0));
    int num = rand() % 3;
    std::cout << "random number is " << num << std::endl;
    if(num == 0)
        return (new A);
    else if(num == 1)
        return (new B);
    else if(num == 2)
        return (new C);
    return (NULL);
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p) != NULL)
			std::cout << "type of Base is A" << std::endl;
	else if(dynamic_cast<B*>(p) != NULL)
		std::cout << "type of Base is B" << std::endl;
	else if(dynamic_cast<C*>(p) != NULL)
    	std::cout << "type of Base is C" << std::endl;
}

void identify(Base& p)
{
    try{
        (void) dynamic_cast<A&>(p);
        std::cout << "type is A" << std::endl;
    }
    catch(std::bad_cast){}
    try{
        (void) dynamic_cast<B&>(p);
        std::cout << "type is B" << std::endl;
    }
    catch(std::bad_cast){}
    try{
        (void) dynamic_cast<C&>(p);
        std::cout << "type is C" << std::endl;
    }
    catch(std::bad_cast){}
}

Base::~Base()
{
    
}
