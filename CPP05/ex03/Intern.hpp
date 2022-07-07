/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:26:23 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 23:09:18 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_H
#define INTERN_H

# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class Intern
{
public:
		Intern(void);
		Intern(Intern const & src);
		~Intern(void);
		Intern &	operator=(Intern const &);
		Form*	makeForm(std::string const & s1, std::string const & s2);
		
		class	FormNotCreated : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{return ("Intern could not create Form");}
		};
};


#endif
