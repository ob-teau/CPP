/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:04 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 18:35:27 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_H
# define	BUREAUCRAT_H

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class	Bureaucrat {

public:
					Bureaucrat(const std::string name1, int grade1);
					~Bureaucrat(void); //COP
	std::string const &	getName() const;
	int const &			getGrade() const;
		void		grade_increment();
		void		grade_decrement();
		void		signForm(Form & form);

private:
			std::string	const	_name;
			int					_grade;
			void				checkGrade(int x);
								Bureaucrat(void); //CO
					Bureaucrat(Bureaucrat const & src); //COP
	Bureaucrat &	operator=(Bureaucrat const & rhs);//COP


	class	GradeTooHighException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{return ("Grade is Too High");}
	};


	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{return ("Grade is Too Low");}
	};
};

std::ostream & operator<<(std::ostream & cout, const Bureaucrat & rhs);

#endif
