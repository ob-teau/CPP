/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:59:10 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/21 18:44:42 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

std::cout << std::endl << std::endl << std::endl;

{
std::cout << "instantiate form 150/1 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 1);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}


{
std::cout << "instantiate form 150/0 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 0);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 151/1 = " << std::endl;
	try
	{
		Form a("laisser passer A38", 151, 1);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 150/1 and bureaucrat 150 signs it= " << std::endl;
	try
	{
		Form a("laisser passer A38", 150, 1);
		std::cout << a << std::endl;
		Bureaucrat b("alice", 150);
		std::cout << b << std::endl;
		b.signForm(a);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}

{
std::cout << "instantiate form 149/1 and bureaucrat 150 signs it= " << std::endl;
	try
	{
		Form a("laisser passer A38", 149, 1);
		std::cout << a << std::endl;
		Bureaucrat b("alice", 150);
		std::cout << b << std::endl;
		b.signForm(a);
		std::cout << a << std::endl;
	}
	catch(std::exception & e)
		{std::cout << e.what() << std::endl;}
}
	return 0;
}
