/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:58 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:20:13 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>


class WrongAnimal
{
protected:
	std::string _type;
public:
	WrongAnimal(const std::string &name);
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal &operator=(WrongAnimal const &src);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string const& getType( void ) const;
};


#endif
