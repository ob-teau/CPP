/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:53:22 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/17 14:31:41 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << a + b << std::endl;
	std::cout << b - a << std::endl;

	std::cout << ((a > b) ? "yes" : "no") << std::endl;
	std::cout << ((a < b) ? "yes" : "no") << std::endl;

	std::cout << ((a != b) ? "yes" : "no") << std::endl;
	std::cout << ((a == b) ? "yes" : "no") << std::endl;

	return 0;
}

