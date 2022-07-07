/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:31:49 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 23:13:36 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const & src){
	*this = src;}

Intern::~Intern(){}

Intern & Intern::operator=(Intern const &){
	return *this;}

Form*	Intern::makeForm(std::string const & s1, std::string const & s2){
	int i = -1;
	std::string formName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	while (++i < 3)
		if (formName[i] == s1)
			break;
	switch(i){
		case 3 :
			throw(FormNotCreated());
		case 0 :
			std::cout <<"Intern creates " <<s1 <<std::endl;
			return new PresidentialPardonForm(s2);
		case 1 :
			std::cout <<"Intern creates " <<s1 <<std::endl;
			return new RobotomyRequestForm(s2);
		case 2 :
			std::cout <<"Intern creates " <<s1 <<std::endl;
			return new ShrubberyCreationForm(s2);
		}
		return (NULL);
}
