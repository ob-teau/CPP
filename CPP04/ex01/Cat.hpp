/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:15:06 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 19:48:01 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat :public Animal {
public:
					Cat(void); //COP
                    Cat(Cat const & src); //COP
					virtual ~Cat(void); //COP
			Cat &	operator=(Cat const & rhs); //COP
			virtual void	setIdeas(std::string ideas);
			virtual void	getIdeas(void) const;
private:
	std::string		sound;
	virtual void	makeSound(void) const;
	Brain*			Brain;
};

#endif
