/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:40:38 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 15:47:13 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	zb = Zombie("Zombilosophe");
	zb.announce();
	Zombie *zombiePtr;
	zombiePtr = newZombie("Zombivant");
	zombiePtr->announce();
	randomChump("Zombinanimé");
	delete zombiePtr;
	return (0);
}
