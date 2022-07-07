/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:28:54 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:30:23 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) :type("Animal"){
	std::cout <<"Animal default constructor called" <<std::endl;}


Animal::Animal(Animal const & src){
	std::cout <<"Animal copy constructor called" <<std::endl;
	*this = src;}


Animal::Animal(std::string type) :type(type){
	std::cout <<"Animal constructor called by inheritance." <<std::endl;}


Animal::~Animal(void){
	std::cout <<"Animal destructor called" <<std::endl;}


Animal &	Animal::operator=(Animal const & rhs){
	if (this != &rhs){
		this->type = rhs.type;}
	return *this;}


void	Animal::makeSound(void) const{
	std::cout <<" uuuUUUUUUUuUh " <<std::endl;}


std::string	const & Animal::getType(void) const{
	return this->type;}
