/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 16:09:42 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	
{
std::cout << "instantiate grade 150 = ";
	try
	{
		Bureaucrat bureaucrat("alice", 150);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

{
std::cout << "instantiate grade 151 = ";
	try
	{
		Bureaucrat bureaucrat("alice", 151);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 0 = ";
	try
	{
		Bureaucrat bureaucrat("alice", 0);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 1 and grade_increment = ";
	try
	{
		Bureaucrat bureaucrat("alice", 1);
		bureaucrat.grade_increment();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 2 and grade_increment = ";
	try
	{
		Bureaucrat bureaucrat("alice", 2);
		bureaucrat.grade_increment();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 150 and grade_decrement = ";
	try
	{
		Bureaucrat bureaucrat("alice", 150);
		bureaucrat.grade_decrement();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}


{
std::cout << "instantiate grade 149 and grade_decrement = ";
	try
	{
		Bureaucrat bureaucrat("alice", 149);
		bureaucrat.grade_decrement();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

	return 0;
}
