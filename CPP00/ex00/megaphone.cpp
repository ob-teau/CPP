/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:53:50 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 17:49:50 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <ctype.h>

int	main(int ac, char **av){
	if (ac > 1){
		for (int i = 1; i < ac; i++){
			for (int j = 0; av[i][j]; j++)
				std::cout << (char)std::toupper(av[i][j]);}
		std::cout << std::endl;
		return 0;}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
