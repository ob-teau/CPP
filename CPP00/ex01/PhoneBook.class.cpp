/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:25:47 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 09:38:52 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	this->contact_nb = 0;
	std::cout << "***********************************" <<std::endl;
	std::cout << "◤^ᴥ^◥ {Welcome to your phonebook !)" <<std::endl;
	std::cout << "***********************************" <<std::endl;
	std::cout << "You can ADD a contact              " <<std::endl;
	std::cout << "You can SEARCH a contact           " <<std::endl;
	std::cout << "You can EXIT your PhoneBook        " <<std::endl <<std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout <<"********************************************" <<std::endl;
	std::cout <<"◤^ᴥ^◥ {Your PhoneBook has been erased, bye~)" <<std::endl;
	std::cout <<"********************************************" <<std::endl;
	return;
}
