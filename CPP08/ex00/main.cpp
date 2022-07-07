/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:52:49 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/24 16:23:40 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>

int main()
{
	{
		std::deque<int> deq;

		for (int i = 0; i < 10000; i++)
			deq.push_back(i);
		try {
			std::deque<int>::iterator it = easyfind(deq, 3674);
			std::cout <<*it <<std::endl;}
		catch (std::exception & e){
			std::cout <<e.what() <<std::endl;}
	}

	{
		std::vector<int> vec;

		for (int i = 0; i < 10000; i++)
			vec.push_back(i);
		try {
			std::vector<int>::iterator it = easyfind(vec, 3674);
			std::cout <<*it <<std::endl;}
		catch (std::exception &e){
			std::cout <<e.what() <<std::endl;}
	}

	{
		std::vector<int> vec;

		for (int i = 0; i < 10000; i++)
			vec.push_back(i);
		try {
			std::vector<int>::iterator it = easyfind(vec, 10000);
			std::cout <<*it <<std::endl;}
		catch (std::exception &e){
			std::cout <<e.what() <<std::endl;}
	}
	return 0;
}
