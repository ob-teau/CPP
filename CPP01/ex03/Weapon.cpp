/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:55:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/12 10:19:12 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t) :type(t){
	return;
}

Weapon::~Weapon(void){
	std::cout <<"swords sure don't last... Weapon Destructed." <<std::endl;
}

std::string const &Weapon::getType(void) const {
	return this->type;
}

void Weapon::setType(const std::string t){
	this->type = t;
}
