/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:32:15 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:33:26 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"), sound("Wrong Meow ?") {
	std::cout <<"WrongCat default constructor called" <<std::endl;}


WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src) {
	std::cout <<"WrongCat copy constructor called" <<std::endl;
	*this = src;}


WrongCat::~WrongCat() {
	std::cout <<"WrongCat destructor called" <<std::endl;}


WrongCat &	WrongCat::operator=(WrongCat const & rhs){
	if (this != &rhs){
		this->sound = rhs.sound;}
	return *this;}


void	WrongCat::makeSound() const{
	std::cout <<this->sound <<std::endl;}

