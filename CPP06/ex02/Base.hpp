/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 21:18:17 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/22 21:22:27 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H

#include <cstdlib>
#include <time.h>

class Base 
{
	public:
		virtual ~Base(void);
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif
