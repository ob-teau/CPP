/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:01:35 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/17 16:27:53 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() :vfixe(0){}

Fixed::Fixed(Fixed const & src){
	*this=src;}

Fixed::Fixed(const int n){
	this->vfixe = n << this->nbits;}

Fixed::Fixed(const float n){
	int power = ft_pow(2, this->nbits);
	this->vfixe = roundf(n * power);}

Fixed::~Fixed(){}

float	Fixed::toFloat(void) const {
	int power = ft_pow(2, this->nbits);
	float f = (float)this->vfixe / power;
	return (f);}

int		Fixed::toInt(void) const {
	int x = this->vfixe >> this->nbits;
	return (x);}

int		Fixed::getRawBits(void) const{
	return (this->vfixe);}

void		Fixed::setRawBits(int const raw) {
	this->vfixe = raw;}

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

Fixed	& Fixed::operator=(Fixed const & rhs){
	if (this != &rhs){
		this->vfixe = rhs.getRawBits();}
	return *this;}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o <<i.toFloat();
	return o;}

bool	Fixed::operator<(Fixed const & i) const {
	if (this->vfixe < i.vfixe)
		return (true);
	return (false);}

bool	Fixed::operator>(Fixed const & i) const {
	if (this->vfixe > i.vfixe)
		return (true);
	return (false);}

bool	Fixed::operator<=(Fixed const & i) const {
	if (this->vfixe <= i.vfixe)
		return (true);
	return (false);}

bool	Fixed::operator>=(Fixed const & i) const {
	if (this->vfixe >= i.vfixe)
		return (true);
	return (false);}

bool	Fixed::operator==(Fixed const & i) const {
	if (this->vfixe == i.vfixe)
		return (true);
	return (false);}

bool	Fixed::operator!=(Fixed const & i) const {
	if (this->vfixe != i.vfixe)
		return (true);
	return (false);}

Fixed	Fixed::operator+(Fixed const & rhs) const {
	Fixed	res;
	res.setRawBits(this->vfixe + rhs.vfixe);
	return (res);}

Fixed	Fixed::operator-(Fixed const & rhs) const {
	Fixed	res;
	res.setRawBits(this->vfixe - rhs.vfixe);
	return (res);}

Fixed	Fixed::operator*(Fixed const & rhs) const {
	Fixed	res(this->toFloat() * rhs.toFloat());
	return (res);}

Fixed	Fixed::operator/(Fixed const & rhs) const {
	Fixed	res(this->toFloat() / rhs.toFloat());
	return (res);}

Fixed	& Fixed::operator++(void){
	this->vfixe++;
	return *this;}

Fixed	Fixed::operator++(int){
	Fixed	res;
	res.vfixe = this->vfixe;
	this->vfixe++;
	return res;}

Fixed	& Fixed::operator--(void){
	this->vfixe--;
	return *this;}

Fixed	Fixed::operator--(int){
	Fixed	res;
	res.vfixe = this->vfixe;
	this->vfixe--;
	return res;}

Fixed	& Fixed::min(Fixed & nb1, Fixed & nb2){
	if (nb1 < nb2)
		return nb1;
	return nb2;}

Fixed	& Fixed::max(Fixed & nb1, Fixed & nb2){
	if (nb1 > nb2)
		return nb1;
	return nb2;}

Fixed	Fixed::min(Fixed const & nb1, Fixed const & nb2){
	if (nb1 < nb2)
		return nb1;
	return nb2;}

Fixed	Fixed::max(Fixed const & nb1, Fixed const & nb2){
	if (nb1 > nb2)
		return nb1;
	return nb2;}
