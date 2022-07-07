/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 13:15:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 14:43:07 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n) {
	return;
}

Zombie::~Zombie(void){
	std::cout <<this->name <<": ...too much pressure. Might as well drop dead." <<std::endl;
}

void	Zombie::announce(void) const {
	std::cout <<this->name <<": To live or not to live ..? aermm i mean BraiiiiinnnzzzZ" <<std::endl;
}
