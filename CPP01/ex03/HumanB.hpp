/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:56:44 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/12 10:27:42 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {

	public:
		HumanB(std::string n);
		~HumanB(void);
		void			attack(void) const;
		void			setWeapon(Weapon &Weap);

	private:
		Weapon			*weapon;
		std::string		const name;

};

#endif

