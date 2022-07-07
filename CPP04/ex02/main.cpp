/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:47:21 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 11:10:37 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
//		Animal a;
		Animal* animals[2];
		animals[0] = new Dog();
		animals[1] = new Cat();
		std::cout <<std::endl;

	for (int i=0; i < 2; i++)
		delete animals[i];
	std::cout <<std::endl;

	Dog basic;
	basic.setIdeas("eating");
	{
		Dog tmp = basic;
		tmp.getIdeas();
		tmp.setIdeas("playing");
		tmp.getIdeas();
	}
	std::cout <<std::endl;
	basic.getIdeas();
	return 0;
}

