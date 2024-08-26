/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:07:17 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/26 03:54:03 by marvin           ###   ########.fr       */
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

size_t     verif_nbr(std::string elements)
{
    size_t i = 0;
    
    if (elements[0] == '-')
        i++;
    while(elements[i])
    {
        if(std::isdigit(elements[i]) == 0)
            break;
        i++;
    }
    return i;
}

void    convert_bis(std::string &elements, int i)
{
    int integer = 0;
    float   fl = 0;
    double dl = 0;
    
    integer = atoi(elements.c_str());
    fl = atof(elements.c_str());
    dl = atof(elements.c_str());
    if(i == 1)
    {
        std::cout << "char: " << elements[0] << std::endl;
        std::cout << "int: " << static_cast<int>(elements[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(elements[0]) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(elements[0]) << ".0" << std::endl;
        return ;
    }
    else if (std::isprint(integer) && i != 5)
       std::cout << "char: " << static_cast<char>(integer) << std::endl;
    else if (i != 5 && (integer >= 0 && integer <= 127))
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    
    if (std::isinf(dl) || std::isnan(dl) || dl > INT_MAX || dl < INT_MIN)
        std::cout << "int: impossible" << std::endl;  
    else if (i != 5)
        std::cout << "int: " << integer << std::endl;
        
    if (std::isinf(fl)) 
    {
        if (fl > 0) 
            std::cout << "float: +inff" << std::endl;
        else
            std::cout << "float:  -inff" << std::endl;
        i++;
    }
    else if (std::isnan(fl)) 
    {
        std::cout << "float: nanf" << std::endl;
        i++;
    } 
    else if (i != 5)
    {
        if (fl == integer)
            std::cout << "float: " << fl << ".0f" << std::endl;
        else
            std::cout << "float: " << fl << "f" << std::endl;
    }
    if (std::isinf(dl)) 
    {
        if (dl > 0)
            std::cout << "double: +inf" << std::endl;
        else
            std::cout << "double: -inf" << std::endl;
        i++;
    } 
    else if (std::isnan(dl)) 
    {
        std::cout << "double: nan" << std::endl;
        i++;
    } 
    else if (i != 5)
    {
        if (dl == integer)
            std::cout << "double: " << dl << ".0" << std::endl;
        else
            std::cout << "double: " << dl << std::endl;
    }
    if (i == 5)
    {
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        std::cout << "Is not a good type" << std::endl;
    }
}

void    ScalarConverter::convert(std::string &elements)
{
    if ((elements.find(".") != std::string::npos) && verif_nbr(elements.substr(0, elements.find("."))))
    {
        if (elements.find("f") == (elements.size() - 1) && verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            convert_bis(elements, 3);
        else if (verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            convert_bis(elements, 4);
        else
            convert_bis(elements, 5);
    }
    else if (verif_nbr(elements) == elements.size())
    {
        convert_bis(elements, 2);
    }
    else
    {
        if(elements.size() == 1 && std::isprint(elements[0]))
            convert_bis(elements, 1);
        else
            convert_bis(elements, 5);
    }    
}