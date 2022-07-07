/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:58:09 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/20 19:07:19 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_H
# define BRAIN_H

#include "Animal.hpp"

class	Brain {
public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		Brain & operator=(Brain const & rhs);

		std::string	ideas[100];
};

#endif
