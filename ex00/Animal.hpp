/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:05 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/05 05:37:26 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>


class Animal
{
protected:
	std::string type;
public:
	Animal(const std::string &name);
	Animal(Animal const &other);
	~Animal();
	Animal &operator=(Animal const &src);

};


#endif
