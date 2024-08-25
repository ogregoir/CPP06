/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:46:13 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/24 16:26:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

class   ScalarConverter
{
    private :
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
    public :
        ScalarConverter& operator=(const ScalarConverter &copy);
        ~ScalarConverter();
        static void convert(std::string &elements);
};