/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:09:58 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/24 17:53:10 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_H
# define	SPAN_H

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public :
	Span(void);
	Span(unsigned int n);
	Span(Span const & src);
	~Span(void);
	Span & operator=(Span const & rhs);

	void	addNumber(int i);
	void	randomGenerator(void);
	void	fillWithRange(std::vector<int>::iterator, std::vector<int>::iterator);
	int		shortestSpan();
	int		longestSpan();

private:
	std::vector<int>	_container;
	unsigned int		_size;

	class containerIsFull : public std::exception 
	{
		public:
			virtual const char * what() const throw() {
				return ("container Is Full");}
	};

	class cannotExecute : public std::exception
	{
		public :
			virtual const char * what() const throw() {
				return ("Cannot execute function with less than 2 numbers");}
	};
};

#endif
