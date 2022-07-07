/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:38:44 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/16 12:18:05 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl			comment;
	std::string		str;

	if (ac != 2) {
		std::cout <<"Wrong arguments number" <<std::endl;
		return (-1);}
	str = (std::string)av[1];
	if ((str != "debug" && str != "info" && str != "warning" && str != "error")){
		std::cout << "Wrong argument entered" <<std::endl;}
	comment.complain(str);
	return 0;
}
