/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:26:27 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:45:05 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string &name)
{
	_type = name;
	std::cout << "WrongAnimal " << _type << " is created" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal " << _type << " is dead" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	_type = src._type;
	return(*this);
}

std::string const& WrongAnimal::getType( void ) const
{
	return (_type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "Make noisy  and wrong sound" << std::endl;
}
