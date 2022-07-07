/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:07:24 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/15 15:56:54 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_H
# define	FIXED_H

# include <iostream>

class	Fixed {

public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed	& operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

private:
		int					vfixe;
		static int const	nbits = 8;
};

#endif
