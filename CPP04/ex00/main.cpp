/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:47:21 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:24:53 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	
	std::cout << "-----------> const Animal* = new Animal(); <------------" << std::endl << std::endl;

	const Animal* meta1 = new Animal();
	std::cout << meta1->getType() << " goes :" << std::endl;
	meta1->makeSound();
	delete meta1;

	std::cout << std::endl;

	std::cout << "-----------> const Animal* = new Cat(); <------------" << std::endl << std::endl;

	const Animal* cat1 = new Cat();
	std::cout << cat1->getType() << " goes :" << std::endl;
	cat1->makeSound();
	delete cat1;

	std::cout << std::endl;

	std::cout << "-----------> const Animal* = new Dog(); <------------" << std::endl << std::endl;

	const Animal* dog1 = new Dog();
	std::cout << dog1->getType() << " goes :" << std::endl;
	dog1->makeSound();
	delete dog1;

	std::cout << std::endl;

	std::cout << "-----------> const WrongAnimal* = new WrongAnimal(); <------------" << std::endl << std::endl;

	const WrongAnimal* meta4 = new WrongAnimal();
	std::cout << meta4->getType() << " goes :" << std::endl;
	meta4->makeSound();
	delete meta4;

	std::cout << std::endl;

	std::cout << "-----------> const WrongAnimal* = new WrongCat(); <------------" << std::endl << std::endl;

	const WrongAnimal* cat4 = new WrongCat();
	std::cout << cat4->getType() << " goes :" << std::endl;
	cat4->makeSound();
	delete cat4;

	std::cout << std::endl;

	std::cout << "-----------> WrongCat WrongCat(); <------------" << std::endl << std::endl;

	WrongCat cat5;
	std::cout << cat5.getType() << " goes :" << std::endl;
	cat5.makeSound();

	std::cout << std::endl;
	return 0;
}

