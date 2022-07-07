/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:02:02 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 17:13:28 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), sound("Woof") {
	std::cout <<"Dog default constructor called" <<std::endl;}


Dog::Dog(Dog const & src) : Animal(src) {
	std::cout <<"Dog copy constructor called" <<std::endl;
	*this = src;}


Dog::~Dog() {
	std::cout <<"Dog destructor called" <<std::endl;}


Dog &	Dog::operator=(Dog const & rhs){
	if (this != &rhs){
		this->sound = rhs.sound;}
	return *this;}


void	Dog::makeSound() const{
	std::cout <<this->sound <<std::endl;}
