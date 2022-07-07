/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:22:52 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:56:32 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) {
	*this = src;}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
	this->_target = rhs._target;
	return *this;}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target){}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > 137)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::ofstream fs;
		std::string fileName = this->_target;
		fileName += "_shrubbery";
		fs.open(fileName.c_str());
		fs << "                  / \\" << std::endl;
		fs << "     /\\          /   \\" << std::endl;
		fs << "    /  \\  /\\    /     \\" << std::endl;
		fs << "   /    \\/  \\  /       \\" << std::endl;
		fs << "  /      \\   \\/         \\" << std::endl;
		fs << " /        \\  /           \\" << std::endl;
		fs << "/___    ___\\/             \\" << std::endl;
		fs << "    |  |   /               \\" << std::endl;
		fs << "          /_____       _____\\" << std::endl;
		fs << "                |     |" << std::endl;
		fs.close();
	}
}
