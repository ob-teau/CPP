/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:44:00 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/22 19:29:02 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONV_H
#define CONV_H

# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>
//# include <ctgmath>

class Conv
{
public:
				Conv(void);
				Conv(Conv const & src);
				~Conv(void);
				Conv &	operator=(Conv const & rhs);

				void	whatType(const char * value);
				void	getValues(const char * value);
				void	print(void);

				int		type;
	static const int	typeChar = 0;
	static const int	typeInt = 1;
	static const int	typeFloat = 2;
	static const int	typeDouble = 3;

				char	charValue;
				int		intValue;
				float	floatValue;
				double	doubleValue;



	class unknownTypeException : public std::exception {
	public :
		virtual const char * what() const throw() 
			{return ("cannot find a type for your entry");}
	};


};


#endif

