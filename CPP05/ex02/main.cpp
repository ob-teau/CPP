/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 22:17:04 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 146);

std::cout << std::endl << "lvl 146 tries to sign and exe :" << std::endl;
try
{
	executor.signForm(*shrub);
	executor.executeForm(*shrub);
}
catch (std::exception & e) {}
delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 146);

std::cout << std::endl << "lvl 146 increments and then tries to sign and exe :" << std::endl;
try
{
	executor.grade_increment();
	executor.signForm(*shrub);
	executor.executeForm(*shrub);
}
catch (std::exception & e) {}
delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 137 tries to exe, then lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << std::endl;

try
{
	executor2.executeForm(*shrub);
	executor.signForm(*shrub);
	executor.executeForm(*shrub);
	executor2.executeForm(*shrub);
}
catch (std::exception & e) {}

	delete shrub;
}



{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 145 tries to sign and exe, then lvl 137 tries to exe :" << std::endl;

try
{
	executor.signForm(*shrub);
	executor.executeForm(*shrub);
	executor2.executeForm(*shrub);
}
catch (std::exception & e) {}

	delete shrub;
}




{
Form* shrub = new ShrubberyCreationForm("jardin");
Bureaucrat executor("knightsWhoSayNi", 145);
Bureaucrat executor2("KingArthur", 137);

std::cout << std::endl << "lvl 145 tries to sign, then lvl 137 tries to exe :" << std::endl;

try
{
	executor.signForm(*shrub);
	executor2.executeForm(*shrub);
}
catch (std::exception & e) {}


std::cout << "But the Knights who say Ni are now the knights who say \"Ekke Ekke Ekke Ekke Ptang Zoo Boing\" and therefore no longer desire the shrubbery." << std::endl << "They left it in this folder." << std::endl;

	delete shrub;
}


{
Form* roboK = new RobotomyRequestForm("Agent K");
Bureaucrat executor("Agent 2", 2);

std::cout << std::endl << "lvl 2 tries to sign and exe :" << std::endl;
try
{
	executor.signForm(*roboK);
	executor.executeForm(*roboK);
}
catch (std::exception & e) {}

delete roboK;

}


{
Form* pardon = new PresidentialPardonForm("Ziltoid the Omniscient");
Bureaucrat executor("Captain Spectaculor", 2);

std::cout << std::endl << "lvl 2 tries to sign and exe :" << std::endl;
try
{
	executor.signForm(*pardon);
	executor.executeForm(*pardon);
}
catch (std::exception & e) {}


delete pardon;
}
return 0;
}
