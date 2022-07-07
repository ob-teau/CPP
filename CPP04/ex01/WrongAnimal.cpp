/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:23:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:32:39 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) :type("WrongAnimal"){
	std::cout <<"WrongAnimal default constructor called" <<std::endl;}


WrongAnimal::WrongAnimal(WrongAnimal const & src){
	std::cout <<"WrongAnimal copy constructor called" <<std::endl;
	*this = src;}


WrongAnimal::WrongAnimal(std::string type) :type(type){
	std::cout <<"WrongAnimal constructor called by inheritance." <<std::endl;}


WrongAnimal::~WrongAnimal(void){
	std::cout <<"WrongAnimal destructor called" <<std::endl;}


WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs){
	if (this != &rhs){
		this->type = rhs.type;}
	return *this;}


void	WrongAnimal::makeSound(void) const{
	std::cout <<" uuuUUUUUUUuUh " <<std::endl;}


std::string	WrongAnimal::getType(void) const{
	return this->type;}

