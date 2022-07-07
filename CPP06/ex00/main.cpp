/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:26:45 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/22 18:50:55 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cout <<"Invalide number of arguments" <<std::endl;
		return 0;}

	Conv value;

	try {
		value.whatType(av[1]);
		value.getValues(av[1]);
		value.print();}

	catch (std::exception & e){
		std::cout << e.what() << std::endl;}

	return 0;
}
