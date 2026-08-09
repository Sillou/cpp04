/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:26:40 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 22:35:00 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <cstdlib>

int main()
{
	int size = 6;
	Animal* animals[size];

	for(int i = 0; i < size; i++)
	{
		if (i < size /2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++)
		animals[i]->makeSound();

	Dog originalDog;
	Dog copyDog(originalDog);

	for(int i = 0; i < size; i++)
		delete animals[i];
	return (0);
}
