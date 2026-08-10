/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:05 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/10 16:49:04 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>


class Animal
{
protected:
	std::string _type;
public:
	Animal(const std::string &name);
	Animal( void );
	Animal(Animal const &other);
	Animal &operator=(Animal const &src);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string const& getType( void ) const;
};


#endif
