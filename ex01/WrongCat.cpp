/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:26:27 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:42:46 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("Cat")
{
	std::cout << "Not a beautiful " << _type << " is created from Animal" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Wrong cat " << _type << " is destroyed." << std::endl;
}
WrongCat &WrongCat::operator=(WrongCat const &src)
{
	WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	*this = other;
}

void WrongCat::makeSound( void ) const
{
	std::cout << "PIOU PIOU!" << std::endl;
}
