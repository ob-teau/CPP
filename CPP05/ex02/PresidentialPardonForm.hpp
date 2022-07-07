/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:01:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:58:36 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public: 
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);
	void	execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
	PresidentialPardonForm(void);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);
};


#endif
