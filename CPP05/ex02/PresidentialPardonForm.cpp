/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:22:52 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:53:45 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) {
	*this = src;}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
	this->_target = rhs._target;
	return *this;}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45), _target(target){}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (executor.getGrade() > 45)
		throw Form::GradeTooLowToExecuteException();
	else if (!this->_sign)
		throw Form::FormNotSignedException();
	else
	{
		std::cout << "I, " << executor.getName() << ", now hereby pronounce the pardonning of " << this->_target << " by official decree from the Mighty Zaphod Beeblebrox, beloved leader of our great nation !" << std::endl << "GG dude." << std::endl;
	}
}
