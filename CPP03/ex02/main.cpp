/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:58:00 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 19:00:36 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main()
{
	FlagTrap	i_Love_you_guys("i_Love_you_guys");
	ScavTrap	Serena_Lover("Serena_Lover");
	ClapTrap	Stairs_Hater("Stairs_Hater");

	std::cout <<std::endl;
	Serena_Lover.guardGate();
	Serena_Lover.attack(" Stairs_Hater ");
	Stairs_Hater.takeDamage(5);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.attack(" Serena_Lover ");
	Serena_Lover.takeDamage(10);
	std::cout <<std::endl;
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.attack(" Serena_Lover ");
	Serena_Lover.takeDamage(12);
	Serena_Lover.beRepaired(3);
	std::cout <<std::endl;
	i_Love_you_guys.highFivesGuys();
	std::cout <<std::endl;

	return (0);
}
