/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 17:13:21 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/09 18:00:07 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

int	main(void)
{
	PhoneBook	pbk;
	std::string	prompt;
	std::string	buff;
	int			ind;
	int			i = -1;
	std::stringstream	st;
	while (1)
	{
		std::cout << "******************************************************" <<std::endl;
		std::cout << "◤^ᴥ^◥ {Please enter a command : add, search or exit !)" <<std::endl;
		std::cout << "******************************************************" <<std::endl <<std::endl;

		if (!std::getline(std::cin, prompt) || prompt == "exit" || prompt == "EXIT"){
		std::cout <<std::endl << "*******************************" <<std::endl;
		std::cout << "◤^ᴥ^◥ {Thank you and goodbye !)" <<std::endl;
		std::cout << "*******************************" <<std::endl <<std::endl;
			exit (0);}

		else if (prompt == "ADD" || prompt == "add"){
			++i %= 8;
			pbk.tab_contact[i].add_contact(i);
			if (pbk.contact_nb != 8)
				pbk.contact_nb = i + 1;}

		else if (prompt == "SEARCH" || prompt == "search"){
			if (pbk.contact_nb < 1){
				std::cout <<std::endl <<"◤^ᴥ^◥ {Please add a contact before searching)" <<std::endl <<std::endl;
				continue;}
			std::cout << "*********************************************" <<std::endl;
			std::cout << "       ◤^ᴥ^◥ {those are your contacts)       " <<std::endl;
			std::cout << "*********************************************";
			for (int i = 0; i < pbk.contact_nb; i++){
				std::cout <<std::endl <<"|";
				pbk.tab_contact[i].search_contact();}
			std::cout <<std::endl <<std::endl <<"◤^ᴥ^◥ {Please enter an index number to get your contact informations)" <<std::endl <<std::endl;
			std::getline(std::cin, buff);
			st << buff;
			st >> ind;
			st.clear();
			st.str("");
			if (ind > 0 && pbk.tab_contact[ind - 1].exists){
				pbk.tab_contact[ind - 1].display_contact();}
			else
				continue;}
		std::cout <<std::endl;
	}
	return (0);
}
