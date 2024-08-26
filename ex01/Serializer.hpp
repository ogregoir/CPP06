/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 03:49:42 by marvin            #+#    #+#             */
/*   Updated: 2024/08/26 03:49:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <stdint.h>

struct Data
{
    int         nbr;
    std::string string;
};

class Serializer
{
    private :
        Serializer();
        Serializer(const Serializer &copy);

    public :
        Serializer& operator=(const Serializer &copy);
        ~Serializer();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};