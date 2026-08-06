/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:20 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/05 09:09:50 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
private:

public:
	Dog( void );
	Dog(Dog const &other);
	Dog &operator=(Dog const &src);
	~Dog();

	virtual void makeSound() const;
};

#endif
