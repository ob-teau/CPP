/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:53:38 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 16:18:48 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*		hoard = new Zombie[N];

	for (int i = 0; i < N; i++){
		hoard[i].setName(name);}
	return (hoard);
}
