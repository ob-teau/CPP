/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:07:24 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/16 12:37:25 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FIXED_H
# define	FIXED_H

# include <iostream>
# include <tgmath.h>
class	Fixed {

public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);

		Fixed	& operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

private:
		int					vfixe;
		static int const	nbits = 8;
};

int				ft_pow(int i, int power);
std::ostream &	operator<<(std::ostream & o, Fixed const & i);

#endif
