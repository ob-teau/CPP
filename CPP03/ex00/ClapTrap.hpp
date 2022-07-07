/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:49:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/17 18:56:40 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_H
# define	CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
		ClapTrap(std::string s); //COP constructeur
		~ClapTrap(void); // COP destructeur

		ClapTrap &	operator=(ClapTrap const & rhs); // COP operateur d'assignation égal
		void attack(const std::string & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
private:
		std::string		_name;
		unsigned int	_HitPts; //pts de vie
		unsigned int	_EnergyPts; //pts d'energie
		unsigned int	_attackDmg; //dommages infligés
						ClapTrap(void); //COP constructeur par defaut
		ClapTrap(ClapTrap const & src); //COP constructeur par copie
		void			print(int);
};

#endif
