/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 19:07:38 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 19:15:04 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout <<"Brain Default Constructor called" <<std::endl;}


Brain::Brain(Brain const & src){
	std::cout <<"Brain copy Constructor called" <<std::endl;
	*this = src;}

Brain::~Brain(){
	std::cout <<"Brain destructor called" <<std::endl;}

Brain & Brain::operator=(Brain const & rhs){
	if (this != &rhs){
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];}
	return (*this);}
