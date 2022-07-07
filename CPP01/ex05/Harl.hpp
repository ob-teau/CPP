/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:34:16 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/13 16:57:23 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>

class Harl {

	public:
			Harl(void);
			~Harl(void);
			void complain(std::string level);
			void	(Harl::*act[4])(void);

	private:
			void	debug(void);
			void	info(void);
			void	warning(void);
			void	error(void);
};

#endif
