/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:01:35 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/16 12:39:52 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :vfixe(0){
	std::cout <<"default constructor called" <<std::endl;}

Fixed::Fixed(Fixed const & src){
	std::cout <<"copy constructor called" <<std::endl;
	*this=src;}

Fixed::Fixed(const int n){
	std::cout <<"Int constructor called" <<std::endl;
	this->vfixe = n << this->nbits;}

Fixed::Fixed(const float n){
	std::cout <<"float constructor called" <<std::endl;
	int power = ft_pow(2, this->nbits);
	this->vfixe = roundf(n * power);}

Fixed::~Fixed(){
	std::cout <<"destructor called" <<std::endl;}

float	Fixed::toFloat(void) const {
	int power = ft_pow(2, this->nbits);
	float f = (float)this->vfixe / power;
	return (f);}

int		Fixed::toInt(void) const {
	int x = this->vfixe >> this->nbits;
	return (x);}

Fixed	& Fixed::operator=(Fixed const & rhs){
	std::cout <<"copy assignment operator called" <<std::endl;
	if (this != &rhs){
		this->vfixe = rhs.getRawBits();}
	return *this;}

int		Fixed::getRawBits(void) const{
	return (this->vfixe);}

void		Fixed::setRawBits(int const raw) {
	this->vfixe = raw;}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o <<i.toFloat();
	return o;}

int ft_pow(int i, int power){
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	int res = i;
	while (--power)
		res*= i;
	return res;
}
