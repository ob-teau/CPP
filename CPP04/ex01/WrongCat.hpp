/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:30:12 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:33:36 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class	WrongCat :public WrongAnimal {
public:
					WrongCat(void); //COP
					WrongCat(WrongCat const & src); //COP
					virtual ~WrongCat(void); //COP
			WrongCat &	operator=(WrongCat const & rhs); //COP
			void	makeSound(void) const;
private:
	std::string		sound;
};

#endif

