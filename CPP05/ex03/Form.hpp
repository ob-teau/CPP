/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:06:04 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 22:01:23 by acoinus          ###   ########.fr       */
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
					virtual ~Form(void); //COP
					Form(void); //CO
					Form(Form const & src); //COP
					Form &	operator=(Form const & rhs);//COP
	std::string const &	getName() const;
	int const &			getGradeS() const;
	int const &			getGradeE() const;
	bool const &		getSign() const;
		void			beSigned(const Bureaucrat & bur);
		virtual void	execute(Bureaucrat const & executor) const = 0;
protected:
			std::string	const	_name;
			const int			_gradeSign;
			const int			_gradeExe;
			void				checkGrade(void) const;
			bool				_sign;


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

	class	GradeTooLowToSignException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{return ("Grade is Too Low to Sign ");}
	};

	class	GradeTooLowToExecuteException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{return ("Grade is Too Low to Execute ");}
	};

	class	FormNotSignedException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{return ("Form is not Signed");}
	};

};

std::ostream & operator<<(std::ostream & cout, const Form & rhs);

#endif
