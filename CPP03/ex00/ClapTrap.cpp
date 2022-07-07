/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:11:49 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/17 21:24:27 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string s) :_name(s), _HitPts(10), _EnergyPts(10), _attackDmg(0) {
	std::cout <<"ClapTrap " <<this->_name <<" created." <<std::endl;}

ClapTrap::ClapTrap(ClapTrap const & src){
	*this=src;
	std::cout <<"ClapTrap copy created." <<std::endl;}

ClapTrap::~ClapTrap(){
	std::cout <<"Destructor called" <<std::endl;}

ClapTrap	& ClapTrap::operator=(ClapTrap const &rhs){
	this->_name = rhs._name;
	this->_HitPts = rhs._HitPts;
	this->_EnergyPts = rhs._EnergyPts;
	this->_attackDmg = rhs._attackDmg;
	return *this;}

void	ClapTrap::attack(const std::string &target) {
	if (this->_EnergyPts && this->_HitPts) {
		std::cout <<"ClapTrap " <<this->_name <<" attacks" <<target <<std::endl;
		if (this->_EnergyPts > 0)
			this->_EnergyPts--;
		return;}
		this->print(1);}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_EnergyPts && this->_HitPts) {
		this->_HitPts -= amount;
		if (this->_HitPts < 1)
			this->_HitPts = 0;
		std::cout <<"ClapTrap " <<this->_name <<" TAKES DAMAGES by " <<amount <<" Points. ";
		this->print(3);}}

void	ClapTrap::beRepaired(unsigned int	amount) {
	if (this->_EnergyPts && this->_HitPts) {
		this->_HitPts += amount;
		if (this->_HitPts < 1)
			this->_HitPts = 0;
		if (this->_EnergyPts > 0)
			this->_EnergyPts--;
		std::cout <<"ClapTrap " <<this->_name <<" is REPAIRED by " <<amount <<" Points. ";
		this->print(3);
		return;}
	this->print(1);}

void	ClapTrap::print(int x) {
	std::cout <<"ClapTrap " <<this->_name;
	if (this->_EnergyPts < 1 && x == 1) //no energy pts
		std::cout <<" cannot do anything.  N-O  E-N-E-R-G-Y  N-O  M-O-R-E" <<std::endl;
	if (this->_HitPts < 1 && x == 1) //no PV
		std::cout <<" cannot do anything, no PV no more.  N-E-E-D  R-E-P-A-I-R" <<std::endl;
	if (x == 3)
		std::cout <<" has now " <<"PV: " <<this->_HitPts <<", Energy Points: " <<_EnergyPts <<std::endl;}
