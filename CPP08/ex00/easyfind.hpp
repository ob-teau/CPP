/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:01:52 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/24 16:22:15 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>

class occurenceException : public std::exception 
{
	public :
		virtual const char * what() const throw() {
			return("No occurence found");}
};

template <typename T>
typename	T::iterator easyfind(T & container, int const & goal)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), goal);
	if (it == container.end())
		throw occurenceException();
	return it;}

#endif
