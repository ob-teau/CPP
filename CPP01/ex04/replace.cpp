/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 12:40:29 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 18:56:50 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(std::string av1, std::string av2, std::string av3) {
	this->tab[0] = av1;
	this->tab[1] = av2;
	this->tab[2] = av3;
	this->tab[3].empty();
}

Replace::~Replace(){
}

void	Replace::replace(){
	std::string line;

	this->ifs.open(this->tab[0].c_str());
	if (!ifs){
		std::cout <<"./Invalid File." <<std::endl;
		exit(-1);}
	line.assign(std::istreambuf_iterator<char>(this->ifs), std::istreambuf_iterator<char>());
	this->ifs.close();
	for (size_t i = 0; i < line.length(); i++){
		if (!(line.compare(i, this->tab[1].length(), this->tab[1]))){
			line.erase(i, this->tab[1].length());
			line.insert(i, this->tab[2]);
			i += this->tab[2].length() - 1;}}
	this->ofs.open((this->tab[0] + ".replace").c_str());
	if (!ofs){
		std::cout <<"./File Creation Error." <<std::endl;
		this->ifs.close();
		exit(-1);}
	this->ofs << line;
	this->ofs.close();
}
