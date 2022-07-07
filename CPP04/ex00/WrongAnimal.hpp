/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:15:53 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:34:59 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <iostream>

class	WrongAnimal {
public:
						WrongAnimal(void); //COP
						WrongAnimal(std::string type);
						WrongAnimal(WrongAnimal const & src); //COP
						virtual ~WrongAnimal(void); //COP
		WrongAnimal &		operator=(WrongAnimal const & rhs); //COP

		void	makeSound(void) const;
		std::string	getType(void) const;
protected:
		std::string		type;

};

#endif

