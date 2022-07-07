/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 12:56:35 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 14:38:31 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {

	public :
		Zombie(std::string n);
		~Zombie(void);
		void	announce(void) const;

	private :
		std::string		name;
};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
