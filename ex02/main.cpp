/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:56:52 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/26 19:55:11 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main (void)
{
    Base *p = NULL;

    p = generate();
    identify(p);

    Base &q = *p;
    identify(q);

    delete p;
    
}