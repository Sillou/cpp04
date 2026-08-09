/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:43 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:17:13 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "A beautiful " << _type << " is created from Animal" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Oh noo " << _type << " is destroyed." << std::endl;
}
Cat &Cat::operator=(Cat const &src)
{
	Animal::operator=(src);
	return (*this);
}

Cat::Cat(Cat const &other) : Animal(other)
{
	*this = other;
}

void Cat::makeSound( void ) const
{
	std::cout << "Miaouu!" << std::endl;
}
