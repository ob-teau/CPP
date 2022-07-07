/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:56:11 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 16:05:27 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) :weapon(NULL), name(n) {
	return;
}

HumanB::~HumanB(){
	std::cout <<"Man sure fled fast" <<std::endl;
	return;
}

void	HumanB::attack() const {
	if (this->weapon)
		std::cout <<this->name <<" attacks with his " <<weapon->getType() <<std::endl;
	else
		std::cout <<this->name <<" doesn't have any weapon !" <<std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &Weap) {
	this->weapon = &Weap;
	return;
}
