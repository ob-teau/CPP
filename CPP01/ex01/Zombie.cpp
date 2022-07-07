/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:53:02 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 16:20:13 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	
	return ;
}

Zombie::~Zombie(){
	std::cout <<this->name <<": Work's done, might as well drop dead !" <<std::endl;
	return ;
}
void	Zombie::announce() const {
	std::cout <<this->name <<": We are the working dead !!" <<std::endl;
	return ;
}

void	Zombie::	setName(std::string n){
	this->name = n;
	return ; 
}
