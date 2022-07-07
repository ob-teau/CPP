/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:03:26 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/23 17:15:42 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "includes.hpp"

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

template <typename T>
T &		max(T &x, T &y){
	return ((x > y) ? x : y);}

template <typename T>
T &		min(T &x, T &y){
	return ((x < y) ? x : y);}

template <typename T>
void 	swap(T &x, T &y){
	T tmp = x;
	x = y;
	y = tmp;}
