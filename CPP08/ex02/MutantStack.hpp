/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 18:42:58 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/24 18:55:56 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		MUTANTSTACK_H
#define		MUTANTSTACK_H

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack(void) {}
		MutantStack(const MutantStack & src) {*this = src;}
		~MutantStack(void){}
		MutantStack & operator=(const MutantStack &) {return *this;}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void) {return this->c.begin();}
		iterator end(void) {return this->c.end();}
};

#endif
