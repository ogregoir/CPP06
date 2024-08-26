/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 03:48:48 by marvin            #+#    #+#             */
/*   Updated: 2024/08/26 03:48:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data;
	uintptr_t ptr;

	data.nbr = 20;
	data.string = "pipo";

	std::cout << "number = " << data.nbr << " || " << "string = " << data.string << std::endl;
	ptr = Serializer::serialize(&data);
    
	std::cout << "ptr = " << ptr << std::endl;
	data = *Serializer::deserialize(ptr);
	std::cout << "number = " << data.nbr << " || " << " string = " << data.string << std::endl;
}
