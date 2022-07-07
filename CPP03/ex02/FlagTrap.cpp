/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:53:27 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 18:10:59 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap() :ClapTrap() {
	std::cout <<"=FlagTRAP= Constructor called." <<std::endl;}

FlagTrap::FlagTrap(FlagTrap const & src) :ClapTrap(src) {
	std::cout <<"=FlagTRAP= copy Constructor called" <<std::endl;}

FlagTrap::FlagTrap(std::string s) :ClapTrap(s, 100, 100, 30) {
	std::cout <<"=FlagTRAP= " <<this->_name <<" created." <<std::endl;}

FlagTrap::~FlagTrap() {
	std::cout <<"=FlagTRAP= " <<this->_name <<" destroyed." <<std::endl;}

FlagTrap	& FlagTrap::FlagTrap::operator=(FlagTrap const & rhs){
	if(this != &rhs){
		this->_name = rhs._name;
		this->_HitPts = rhs._HitPts;
		this->_EnergyPts = rhs._EnergyPts;
		this->_attackDmg = rhs._attackDmg;}
	return *this;}

void	FlagTrap::highFivesGuys(void){
	std::cout <<"Guys ! HIGH FIVE !!!!! ... Guys ? ... nobody for a High Five ? " <<std::endl;}
