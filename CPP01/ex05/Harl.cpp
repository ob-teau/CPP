/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:42:52 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 16:59:22 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::complain(std::string level){
	std::string	lvl[] = {"debug", "info", "warning", "error"};

	this->act[0] = &Harl::debug;
	this->act[1] = &Harl::info;
	this->act[2] = &Harl::warning;
	this->act[3] = &Harl::error;

	for (int i = 0; i < 4; i++){
		if (level == lvl[i]){
			(this->*act[i])();
			return;}}
}

void	Harl::debug(){
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" <<std::endl;
}

void	Harl::info(){
	std::cout <<"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void	Harl::warning(){
	std::cout <<"I think I deserve to have some extra bacon for free. I’ve been coming for  years whereas you started working here since last month." <<std::endl;
}

void	Harl::error(){
	std::cout <<"This is unacceptable! I want to speak to the manager now." <<std::endl;
}
