/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:06:51 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 17:21:06 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class	Animal {
public:
						Animal(void); //COP
						Animal(Animal const & src); //COP
						virtual ~Animal(void); //COP
		Animal &		operator=(Animal const & rhs); //COP
		
		virtual void	makeSound(void) const;
		std::string	const & getType(void) const;
protected:
		Animal(std::string type);
		std::string		type;

};

#endif
