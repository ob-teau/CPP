/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 19:30:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/22 19:40:40 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct Sample {
	int	g;
	char c;} Sample;


uintptr_t serialize(Sample *ptr){
	uintptr_t i;
	i = reinterpret_cast<uintptr_t>(ptr);
	return i;}


Sample	* deserialize(uintptr_t raw){
	Sample* newptr;
	newptr = reinterpret_cast<Sample*>(raw);
	return newptr;}


int main()
{
	Sample *ptr;
	ptr = new  Sample;

	ptr->g = 42;

	std::cout <<ptr <<std::endl <<deserialize(serialize(ptr)) <<std::endl;

	std::cout <<ptr->g <<std::endl;
	
	delete ptr;

	return 0;
}
