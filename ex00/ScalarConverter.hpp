/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:46:13 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/26 02:27:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
#include <cmath>
#include <limits.h>
#include <cfloat>

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