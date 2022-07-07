/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 11:45:25 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 18:58:08 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SCAVTRAP_H
# define	SCAVTRAP_H

# include	"ClapTrap.hpp"

class	ScavTrap :public ClapTrap {
public:
		ScavTrap(std::string s);
		~ScavTrap(void); //COP

		void	guardGate(void);
		void	attack(const std::string & target);
private:
		ScavTrap(void); //COP
		ScavTrap(ScavTrap const & src); //COP
		ScavTrap	& operator=(ScavTrap const & rhs); //COP
};

#endif
