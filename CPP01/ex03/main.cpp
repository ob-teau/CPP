/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:55:22 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 16:09:44 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon sword = Weapon("3 Sabers");
		HumanA zoro("Zoro", sword);
		zoro.attack();
		sword.setType("hamberge");
		zoro.attack();
	}
	{
		HumanB mihawk("Mihawk");
		mihawk.attack();
		Weapon sword = Weapon("Black Sword Yoru");
		mihawk.setWeapon(sword);
		mihawk.attack();
		sword.setType("Kogatana");
		mihawk.attack();
	}
	return 0;
}
