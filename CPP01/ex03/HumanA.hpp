/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 16:56:33 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/12 10:22:53 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {

	public:
		HumanA(std::string n, Weapon const &Weap);
		~HumanA(void);
		void			attack(void) const;

	private:
		Weapon const	&weapon;
		std::string		const name;

};

#endif

