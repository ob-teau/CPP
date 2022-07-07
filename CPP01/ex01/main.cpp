/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:52:23 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 16:20:35 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie*				zombiesPtr;
	int					N;
	std::stringstream	ss;

	if (ac > 2){
		std::cout <<"./too many arguments" <<std::endl;
		return 0;
	}
	if (ac == 2){
		ss << av[1];
		ss >> N;
		zombiesPtr = zombieHorde(N, "Zombillenium worker");
	}
	else {
		N = 5;
		zombiesPtr = zombieHorde(N, "Zombillenium worker");
	}
	for (int i = 0; i < N; i++){
		zombiesPtr[i].announce();}
	delete [] zombiesPtr;

	return 0;
}

