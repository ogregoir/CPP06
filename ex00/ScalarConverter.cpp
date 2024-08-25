/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:07:17 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/23 15:56:40 by marvin           ###   ########.fr       */
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

void    convert_bis()
{
    
}

void    ScalarConverter::convert(std::string &elements)
{
    if (elements.find(".") && verif_nbr(elements.substr(0, elements.find("."))))
    {
        if (elements.find("f") == elements.length() && verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            is_float(elements);
        else if (verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            is_double(elements);
        else
            std::cout << "Is not scalar type" << std::endl;
    }
    else if (verif_nbr(elements) == elements.length())
    {
        int nbr = atoi(elements);
        is_int(elements);
    }
    else
    {
        int i = 0;
        while(elements[i])
        {
            if (std::isalpha(elements[i]) == 0)
                break;
            i++;
        }
        if (i == elements.length())
            is_alpha(elements);
        else
            std::cout << "Is not scalar type" << std::endl;
    }    
}