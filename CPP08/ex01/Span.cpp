/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:18:20 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/24 19:15:19 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const & src) {
	*this =src;}

Span::~Span(void) {}

Span & Span::operator=(Span const & rhs) {
	this->_container = rhs._container;
	this->_size = rhs._size;
	return *this;}


void Span::addNumber(int i) {
	if (this->_container.size() < this->_size)
		this->_container.push_back(i);
	else
		throw Span::containerIsFull();}

int Span::longestSpan() {
	if (this ->_container.size() < 2)
		throw Span::cannotExecute();
	int &min = *min_element(this->_container.begin(), this->_container.end());
	int &max = *max_element(this->_container.begin(), this->_container.end());
	return max - min;}

int Span::shortestSpan() {
	if (this->_container.size() < 2)
		throw Span::cannotExecute();
	std::vector<int> tmp = this->_container;
	sort(tmp.begin(), tmp.end());
	int res = *(tmp.begin() + 1) - *tmp.begin();
	for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++){
		if (res > *(it + 1) - *it)
			res = *(it + 1) - *it;}
	return res;}

void	Span::randomGenerator() {
	srand(time(NULL));
	while (this->_container.size() < this->_size)
		this->_container.push_back(rand());}

void	Span::fillWithRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if (begin <= end){
		while (begin != end){
			if (this->_container.size() >= this->_size)
				throw Span::containerIsFull();
			this->_container.push_back(*begin);
			begin++;}}
	else
		std::cout << "Wrong iterators for fillWithRange function" << std::endl;}

