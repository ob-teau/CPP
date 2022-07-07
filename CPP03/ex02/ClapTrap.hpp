/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 12:49:48 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/18 16:34:28 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CLAPTRAP_H
# define	CLAPTRAP_H

# include <iostream>

class ClapTrap {
public:
		ClapTrap(std::string s); //constructeur
		~ClapTrap(void); // COP destructeur
		ClapTrap(void); //COP constructeur par defaut
		ClapTrap(ClapTrap const & src); //COP constructeur par copie
		ClapTrap(std::string s, unsigned int hpts, unsigned int epts, unsigned int admg);

		ClapTrap &	operator=(ClapTrap const & rhs); // COP operateur d'assignation égal
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void attack(const std::string & target);
protected:
				std::string		_name;
		unsigned int	_HitPts; //pts de vie
		unsigned int	_EnergyPts; //pts d'energie
		unsigned int	_attackDmg; //dommages infligés
private:
		void			print(int);
};

#endif
