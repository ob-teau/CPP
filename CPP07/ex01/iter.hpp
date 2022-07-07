/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:19:36 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/23 18:26:08 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	print(T const &c);

template <typename T>
void	iter(T * tab, unsigned int size, void (*ft)(T const &));
