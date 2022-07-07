/**************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 13:48:25 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 16:29:47 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	std::cout <<"*ScavTRAP* Constructor called." <<std::endl;}

ScavTrap::ScavTrap(ScavTrap const & src) :ClapTrap(src) {
	std::cout <<"*ScavTRAP* copy constructor called." <<std::endl;}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s, 10, 10, 5){
	std::cout << "*ScavTRAP* " <<this->_name <<" created." <<std::endl;}

ScavTrap::~ScavTrap(void){
	std::cout <<"*ScavTRAP* " <<this->_name <<" destroyed." <<std::endl;}

void	ScavTrap::ScavTrap::guardGate(void){
	std::cout <<"*ScavTRAP* " <<this->_name <<" entered Gate keeper mod." <<std::endl;
}

ScavTrap	& ScavTrap::operator=(ScavTrap const & rhs){
	if(this != &rhs){
		this->_name = rhs._name;
		this->_HitPts = rhs._HitPts;
		this->_EnergyPts = rhs._EnergyPts;
		this->_attackDmg = rhs._attackDmg;}
	return *this;}

void	ScavTrap::attack(const std::string & target){
	if (this->_EnergyPts && this->_HitPts) {
		std::cout <<"*ScavTRAP* " <<this->_name <<" assault TENDERLY" <<target <<"." <<std::endl;
		if (this->_EnergyPts > 0)
			this->_EnergyPts--;
		return;}
	if (this->_EnergyPts < 1) //no energy pts
		std::cout <<"*ScavTRAP* "<<this->_name <<" cannot do anything.  N-O  E-N-E-R-G-Y  N-O  M-O-R-E." <<std::endl;
	else if (this->_HitPts < 1) //no PV
		std::cout <<" cannot do anything, no PV no more.  N-E-E-D  R-E-P-A-I-R." <<std::endl;
}
