/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:53:36 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/19 16:29:13 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FLAGTRAP_H
# define	FLAGTRAP_H


# include "ClapTrap.hpp"

class	FlagTrap :public ClapTrap {
public:
		FlagTrap(std::string s);
		~FlagTrap(void); //COP
		void	highFivesGuys(void);

private:
		FlagTrap(void); //COP
		FlagTrap(FlagTrap const & src); //COP
		FlagTrap	& operator=(FlagTrap const & rhs); //COP
};

#endif
