/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:35:27 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 18:02:26 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void){
	this->index = 0;
	this->exists = 0;
	this->appel[0] = "Index";
	this->appel[1] = "First Name";
	this->appel[2] = "Last Name";
	this->appel[3] = "Nickname";
	this->appel[4] = "Phone Number";
	this->appel[5] = "Darkest Secret";
	this->appel[6].empty();
	for (int i = 0; i < 7; i++){
		this->infos[i].empty();}
	return;
}

Contact::~Contact(void){
	return;
}

void	Contact::display_contact(void)
{
	for (int i = 1; i < 6; i++){
		std::cout <<this->appel[i] <<"\t" <<this->infos[i] <<std::endl;}
	return;
}

void	Contact::search_contact(void)
{
	for (int i = 0; i < 4; i++){
		if (infos[i].length() <= 10){
			for(unsigned long j = 0; j < 10 - infos[i].length(); j++)
				std::cout <<" ";
			std::cout <<infos[i] <<"|";}
		else {
			for (int j = 0; j < 9; j++)
				std::cout <<infos[i][j];
			std::cout <<"." <<"|";}}
	return;
}

void	Contact::add_contact(int ind)
{
	std::stringstream	ss;
	this->exists = 1;
	this->index = ind + 1;
	ss << this->index;
	ss >> this->infos[0];
	std::cout <<std::endl <<"◤^ᴥ^◥ {Please enter your contacts informations!)" <<std::endl;
	for (int i = 1; i < 6; i++){
		while (1){
			std::cout << this->appel[i] <<"\t";
			if (!(std::getline(std::cin, this->infos[i]))){
				std::cout <<std::endl  << "*******************************" <<std::endl;
				std::cout << "◤^ᴥ^◥ {Thank you and goodbye !)" <<std::endl;
				std::cout << "*******************************" <<std::endl <<std::endl;
				exit(0);}
			if (this->infos[i].length() >= 1)
				break;
			}}
	std::cout <<std::endl <<std::endl <<"◤^ᴥ^◥ {Contact registered, Thank you!)" <<std::endl;
	return;
}

