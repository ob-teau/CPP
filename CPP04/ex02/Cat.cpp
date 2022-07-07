/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:43:44 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 20:51:41 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), sound("Meow"), Brain(new class Brain()) {
	std::cout <<"Cat default constructor called" <<std::endl;}


Cat::Cat(Cat const & src) : Animal(src) {
	std::cout <<"Cat copy constructor called" <<std::endl;
	*this = src;}


Cat::~Cat() {
	std::cout <<"Cat destructor called" <<std::endl;
	delete Brain;}


Cat &	Cat::operator=(Cat const & rhs){
	if (this != &rhs){
		this->sound = rhs.sound;
		this->Brain = new class Brain;
		for (int i = 0; i < 100; i++)
			this->Brain->ideas[i] = rhs.Brain->ideas[i];}
	return *this;}


void	Cat::makeSound() const{
	std::cout <<this->sound <<std::endl;}


void	Cat::setIdeas(std::string ideas){
	this->Brain->ideas[0] = ideas;}

void	Cat::getIdeas(void) const {
	std::cout <<this->Brain->ideas[0] <<std::endl;}
