/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:01:35 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/15 16:09:45 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :vfixe(0){
	std::cout <<"default constructor called" <<std::endl;}

Fixed::Fixed(Fixed const & src){
	std::cout <<"copy constructor called" <<std::endl;
	*this=src;}

Fixed::~Fixed(){
	std::cout <<"destructor called" <<std::endl;}

Fixed	& Fixed::operator=(Fixed const & rhs){
	std::cout <<"copy assignment operator called" <<std::endl;
	if (this != &rhs){
		this->vfixe = rhs.getRawBits();}
	return *this;}

int		Fixed::getRawBits(void) const{
	std::cout <<"getRawBits member function called" <<std::endl;
	return (this->vfixe);
}

void		Fixed::setRawBits(int const raw) {
	this->vfixe = raw;
}
