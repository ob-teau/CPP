/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:00:00 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/23 19:03:59 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
	int		tab[] = {0, 1, 2, 3, 4};
	float	tabf[] = {1.25, 2.3, 5.5};
	char	tabc[6] = "salut";

	iter(tab, 5, print); 
	std::cout <<std::endl;
	
	iter(tabf, 3, print);
	std::cout <<std::endl;
	
	iter(tabc, 5, print);

	return 0;
}

template <typename T>
void	iter(T *tab, unsigned int size, void (*ft)(T const &)){
	for (unsigned int i=0; i < size; i++)
		ft(tab[i]);}

template <typename T>
void	print(T const &c){
	std::cout <<c << std::endl;
	return;}
