/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:01:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:58:23 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOROMYREQUESTFORM_H
#define ROBOROMYREQUESTFORM_H

# include <iostream>
# include <cstdlib>
# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public: 
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);
	void	execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
	RobotomyRequestForm(void);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);
};


#endif
