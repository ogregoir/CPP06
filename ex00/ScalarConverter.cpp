/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <ogregoir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:07:17 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/21 17:56:02 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    (void)copy;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    
}

int     verif_nbr(std::string elements)
{
    int i = 0;
    
    while(elements[i])
    {
        if(std::isdigit(elements[i]) == 0)
            break;
        i++;
    }
    return i;
}

void    convert_msg(std::string elements)
{
    int i = static_cast<int>(elements);
    std::cout << "char: " << static_cast<char>(elements) << std::endl;
    std::cout << "int: " <<  << std::endl;
}


void    ScalarConverter::convert(std::string &elements)
{
    
    if (elements.find(".") && verif_nbr(elements.substr(0, elements.find("."))))
    {
        if (elements.find("f") == elements.length() && verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
        {
            float f = atof(elements.c_str());
            is_float(f);
        }
        else if (verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
        {
            double d = atof(elements.c_str());
            is_double(d);
        }
           
        else
            std::cout << "Is not scalar type" << std::endl;
    }
    else if (verif_nbr(elements) == elements.length())
    {
        int in = atoi(elements.c_str());
        is_int(in);
    }
    else
    {
        if (std::isalpha(elements[0]) == 0)
        {
            if (elements.length() > 1)
                is_alpha(elements[0]);
            else
                
        }
        while(elements[i])
        {
            if ()
                break;
            i++;
        }
        if (i == )
            is_alpha(elements);
        else
            std::cout << "Is not scalar type" << std::endl;
    }    
}