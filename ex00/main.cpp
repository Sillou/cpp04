/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alubrano <alubrano@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 11:26:40 by alubrano          #+#    #+#             */
/*   Updated: 2026/08/09 21:44:04 by alubrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal("");

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (i);
	delete(j);
	delete(meta);

	const WrongAnimal *k = new WrongAnimal("");
	const WrongAnimal *l = new WrongCat();

	std::cout << l->getType() << " " << std::endl;

	l->makeSound();
	k->makeSound();

	delete(l);
	delete(k);

	return (0);
}
