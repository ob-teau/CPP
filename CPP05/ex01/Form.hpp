/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:04 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 18:46:21 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_H
# define	FORM_H

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

public:
					Form(const std::string name1, int gradeSign, int gradeExe);
					~Form(void); //COP
	std::string const &	getName() const;
	int const &			getGradeS() const;
	int const &			getGradeE() const;
	bool const &		getSign() const;
		void		beSigned(const Bureaucrat & bur);

private:
			std::string	const	_name;
			const int			_gradeSign;
			const int			_gradeExe;
			void				checkGrade(void) const;
			bool				_sign;
								Form(void); //CO
					Form(Form const & src); //COP
	Form &	operator=(Form const & rhs);//COP


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

std::ostream & operator<<(std::ostream & cout, const Form & rhs);

#endif
