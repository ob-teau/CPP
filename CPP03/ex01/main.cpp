/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:58:00 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 18:57:15 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Serena_Lover("Serena_Lover");
	ClapTrap Stairs_Hater("Stairs_Hater");

	std::cout <<std::endl;
	Serena_Lover.guardGate();
	Serena_Lover.attack(" Stairs_Hater ");
	Stairs_Hater.takeDamage(5);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.attack(" Serena_Lover ");
	Serena_Lover.takeDamage(100);
	std::cout <<std::endl;
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.beRepaired(3);
	std::cout <<std::endl;
	Stairs_Hater.attack(" Serena_Lover ");
	Serena_Lover.takeDamage(12);
	Serena_Lover.beRepaired(3);
	std::cout  <<std::endl;

	return (0);
}
