/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:12 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/05 08:52:18 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string &name)
{
	_type = name;
	std::cout << "Animal " << _type << " is created" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal " << _type << " is dead" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
}

Animal &Animal::operator=(Animal const &src)
{
	_type = src._type;
	return(*this);
}
