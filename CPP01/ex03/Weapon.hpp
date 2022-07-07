/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:56:23 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/11 19:32:11 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

	public:
		Weapon(std::string t);
		~Weapon(void);

		std::string const &getType(void) const;
		void	setType(std::string t);

	private:
		std::string	type;
};


#endif
