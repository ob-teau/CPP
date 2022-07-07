/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:53:22 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/15 16:07:20 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout <<a.getRawBits() <<std::endl;
	std::cout <<b.getRawBits() <<std::endl;
	std::cout <<c.getRawBits() <<std::endl;

	return 0;
}
