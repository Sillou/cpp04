/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:05 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 22:05:40 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain &Brain::operator=(Brain const &src)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return (*this);
}
Brain::Brain(void)
{
	std::cout << "New brain is created" << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain is destroyed" << std::endl;
}

Brain::Brain(Brain const &other)
{
	*this = other;
}
