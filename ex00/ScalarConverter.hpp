/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:46:13 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/20 17:37:08 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstring>
#include <cctype>

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