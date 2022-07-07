/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:54:14 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 16:09:18 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <sstream>

class Zombie {

	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);

	private:
		std::string name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
