/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:07:17 by ogregoir          #+#    #+#             */
/*   Updated: 2024/08/24 16:47:41 by marvin           ###   ########.fr       */
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
    if(i == 1 && elements.size() == 1)
        std::cout << elements[0] << std::endl;
    else
       std::cout << static_cast<char>(elements[0]) << std::endl;
    if (i == 2)
        std::cout << integer << std::endl;
    else
        std::cout << static_cast<int>(integer) << std::endl;
    if (i == 3)
        std::cout << fl << ".0f" << std::endl;
    else
        std::cout << static_cast<float>(fl) << "f" << std::endl;
    if(i == 4)
       std::cout << dl << std::endl;
    else
        std::cout << static_cast<double>(dl) << std::endl;    
}

void    ScalarConverter::convert(std::string &elements)
{
    if (elements.find(".") && verif_nbr(elements.substr(0, elements.find("."))))
    {
        if (elements.find("f") == elements.size() && verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            convert_bis(elements, 3);
        else if (verif_nbr(elements.substr(elements.find(".") + 1, elements.length() - 1)))
            convert_bis(elements, 4);
        else
            std::cout << "Is not scalar type" << std::endl;
    }
    else if (verif_nbr(elements) == elements.size())
    {
        convert_bis(elements, 2);
    }
    else
    {
        size_t i = 0;
        while(elements[i])
        {
            if (std::isalpha(elements[i]) == 0)
                break;
            i++;
        }
        if (i == elements.size())
            convert_bis(elements, 1);
        else
            std::cout << "Is not scalar type" << std::endl;
    }    
}