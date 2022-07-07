/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:15:06 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 18:26:02 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class	Cat :public Animal {
public:
					Cat(void); //COP
                    Cat(Cat const & src); //COP
					virtual ~Cat(void); //COP
			Cat &	operator=(Cat const & rhs); //COP
private:
	std::string		sound;
	virtual void	makeSound(void) const;
};

#endif
