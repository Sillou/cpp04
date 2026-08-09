/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:25:05 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:57:52 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>


class Brain
{
protected:
	std::string ideas[100];
public:
	Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &src);
	~Brain();

};


#endif
