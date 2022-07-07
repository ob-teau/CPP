/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:21:46 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:31:20 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class	Dog :public Animal {
public:
					Dog(void); //COP
					Dog(Dog const & src); //COP
					virtual ~Dog(void); //COP
			Dog &	operator=(Dog const & rhs); //COP
private:
	std::string		sound;
	virtual void	makeSound(void) const;
};

#endif

