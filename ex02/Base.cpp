/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 17:24:43 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/26 19:55:02 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"

Base::~Base(){

}

Base* generate() {
    int al;
    
    std::srand(time(NULL));
    al = std::rand();
    if (al % 3 == 0)
        return new C();
    else if(al % 2 == 0)
        return new B();
    else
        return new A();
}

void    identify(Base *p){
    if(dynamic_cast<A *>(p) != NULL)
        std::cout << "Base is : A" << std::endl;
    else if(dynamic_cast<B *>(p) != NULL)
        std::cout << "Base is : B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "Base is : C" << std::endl;
    else
        std::cout << "dynamic_cast impossible" << std::endl;
}

void    identify(Base &p){
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Base is : A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Base is : B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Base is : C" << std::endl;
    }
    catch(const std::exception& e)
    {
    } 
}

