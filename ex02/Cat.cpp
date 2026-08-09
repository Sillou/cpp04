/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:43 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 22:27:28 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "A beautiful " << _type << " is created from Animal" << std::endl;
}

Cat::~Cat( void )
{
	delete(_brain);
	std::cout << "Oh noo " << _type << " is destroyed." << std::endl;
}
Cat &Cat::operator=(Cat const &src)
{
	Animal::operator=(src);
	delete(_brain);
	_brain = new Brain(*src._brain);
	return (*this);
}

Cat::Cat(Cat const &other) : Animal(other)
{
	_brain = new Brain(*other._brain);
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaouu!" << std::endl;
}
