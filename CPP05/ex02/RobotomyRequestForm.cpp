/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:22:52 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:52:12 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) {
	*this = src;}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
	this->_target = rhs._target;
	return *this;}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target){}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > 45)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::cout << "zzzzzzzZZZZZZZzzzBRBRBRBRBR" << std::endl;
		srand(time(NULL));
		if (rand() % 2 == 0)
			std::cout << this->_target << " has been successfully robotomised ! You are great !" << std::endl;
		else
			std::cout << "You failed to robotomise " << this->_target << ", maybe next time ! :I" << std::endl;
	}
}
