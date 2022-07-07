/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:01:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 21:58:08 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public: 
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);
	void	execute(Bureaucrat const & executor) const;

private:
	std::string		_target;
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);
};


#endif
