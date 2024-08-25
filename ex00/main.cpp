/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:23:42 by marvin            #+#    #+#             */
/*   Updated: 2024/08/24 16:23:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    //ScalarConverter nbr;
    if (argc > 1)
    {
        for(int i = 0; argv[i]; ++i)
        {
            std::string arg = argv[i];
            ScalarConverter::convert(arg); 
        }
    }
    else
        std::cout << "Not enough arguments" << std::endl;
    return 0;
}