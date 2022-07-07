/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:02:02 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 20:51:09 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"), sound("Woof"), Brain(new class Brain()) {
	std::cout <<"Dog default constructor called" <<std::endl;}


Dog::Dog(Dog const & src) : Animal(src) {
	std::cout <<"Dog copy constructor called" <<std::endl;
	*this = src;}


Dog::~Dog() {
	std::cout <<"Dog destructor called" <<std::endl;
	delete this->Brain;}


Dog &	Dog::operator=(Dog const & rhs){
	if (this != &rhs){
		this->sound = rhs.sound;
		this->Brain = new class Brain;
		for (int i = 0; i < 100; i++)
			this->Brain->ideas[i] = rhs.Brain->ideas[i];}
	return *this;}


void	Dog::makeSound() const{
	std::cout <<this->sound <<std::endl;}


void	Dog::setIdeas(std::string ideas){
	this->Brain->ideas[0] = ideas;}

void	Dog::getIdeas(void) const {
	std::cout <<this->Brain->ideas[0] <<std::endl;}

