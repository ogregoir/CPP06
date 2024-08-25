/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:48:06 by marvin            #+#    #+#             */
/*   Updated: 2024/08/23 15:48:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    ScalarConverter var;
    if (argc > 1)
    {
        for (int i = 0; ++i; argv[i])
            var.convert(argv[i]);
    }
    else
        std::cout << "Not enough arguments" << std::endl;
    return 0;
}