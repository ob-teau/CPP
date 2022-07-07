/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 13:11:36 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/14 12:53:55 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout <<"./Too few arguments." <<std::endl;
		exit(-1);}
	if (!av[1][0] || !av[2][0] || !av){
		std::cout <<"./Wrong argument entry." <<std::endl;
		exit(-1);}
	Replace re(av[1], av[2], av[3]);
	re.replace();
	return (0);
}
