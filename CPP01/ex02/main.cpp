/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:28:05 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 16:46:38 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout <<"memory address of the string variable :\t" <<&str <<std::endl;
	std::cout <<"memory address held by stringPTR :\t" <<stringPTR <<std::endl;
	std::cout <<"memory address held by stringREF :\t" <<&stringREF <<std::endl<<std::endl;

	std::cout <<"value of str :\t\t" <<str <<std::endl;
	std::cout <<"value of stringPTR :\t" <<*stringPTR <<std::endl;
	std::cout <<"value of stringREF :\t" <<stringREF <<std::endl;
}
