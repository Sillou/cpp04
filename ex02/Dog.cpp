/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:27 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 22:23:34 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Dog " << _type << " is created from Animal" << std::endl;
}

Dog::~Dog( void )
{
	delete (_brain);
	std::cout << "Dog " << _type << " is destroyed." << std::endl;
}
Dog &Dog::operator=(Dog const &src)
{
	Animal::operator=(src);
	delete(_brain);
	_brain = new Brain(*src._brain);
	return (*this);
}

Dog::Dog(Dog const &other) : Animal(other)
{
	_brain = new Brain(*other._brain);
}

void Dog::makeSound( void ) const
{
	std::cout << "Woufff!" << std::endl;
}
