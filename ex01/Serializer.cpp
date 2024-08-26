/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 03:49:20 by marvin            #+#    #+#             */
/*   Updated: 2024/08/26 03:49:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){

}

Serializer::Serializer(const Serializer &copy) {
    *this = copy;
}

Serializer &Serializer::operator=(const Serializer &copy){
    (void)copy;
    return *this;
}
Serializer::~Serializer(){

}

uintptr_t Serializer::serialize(Data* ptr){
    return reinterpret_cast<unsigned long>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}



