/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:56:03 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/12 10:26:13 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon const &Weap) :weapon(Weap), name(n) {
	return;
}

HumanA::~HumanA(void){
	std::cout <<"Man sure got knocked out fast" <<std::endl;
	return;
}

void	HumanA::attack(void) const
{
	std::cout <<this->name <<" attacks with his " <<this->weapon.getType() <<std::endl;
}
