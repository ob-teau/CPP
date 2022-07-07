/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:43:44 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 17:14:59 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), sound("Meow") {
	std::cout <<"Cat default constructor called" <<std::endl;}


Cat::Cat(Cat const & src) : Animal(src) {
	std::cout <<"Cat copy constructor called" <<std::endl;
	*this = src;}


Cat::~Cat() {
	std::cout <<"Cat destructor called" <<std::endl;}


Cat &	Cat::operator=(Cat const & rhs){
	if (this != &rhs){
		this->sound = rhs.sound;}
	return *this;}


void	Cat::makeSound() const{
	std::cout <<this->sound <<std::endl;}
