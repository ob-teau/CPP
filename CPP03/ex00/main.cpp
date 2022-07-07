/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:58:00 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 18:39:18 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Stairs_Lover("Stairs_Lover");
	ClapTrap Stairs_Hater("Stairs_Hater");

	std::cout <<std::endl;
	Stairs_Lover.attack(" Stairs_Hater ");
	Stairs_Hater.takeDamage(5);
	Stairs_Hater.beRepaired(3);
	Stairs_Hater.attack(" Stairs_Lover ");
	Stairs_Lover.takeDamage(10);
	std::cout <<std::endl;
	Stairs_Lover.attack(" Stairs_Hater ");
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
	Stairs_Hater.beRepaired(3);
	std::cout <<std::endl;
	return (0);
}
