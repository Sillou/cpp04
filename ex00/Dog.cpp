/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:27 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:13:24 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog " << _type << " is created from Animal" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog " << _type << " is destroyed." << std::endl;
}
Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	return (*this);
}

Dog::Dog(Dog const &other) : Animal(other)
{
	*this = other;
}

void Dog::makeSound( void ) const
{
	std::cout << "Woufff!" << std::endl;
}
