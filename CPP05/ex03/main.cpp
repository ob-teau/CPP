/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 23:12:37 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
std::cout << std::endl << "intern tries to create fake form and lvl 1 signs and execute : " << std::endl;
Intern randomIntern;
Form *form;

try {
form = randomIntern.makeForm("sonfosnfoi", "Bender");
Bureaucrat executor("alice", 1);
delete form;
}
catch (std::exception & e)
	{std::cout << e.what() << std::endl;}

std::cout << std::endl << "intern creates form and lvl 1 signs and execute : " << std::endl;
try {
	form = randomIntern.makeForm("presidential pardon", "Bender");
	Bureaucrat executor("alice", 1);
	executor.signForm(*form);
	executor.executeForm(*form);
	delete form;
}
catch (std::exception & e) {}


return 0;
}
