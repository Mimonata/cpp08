/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:11:17 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 17:38:44 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <iostream>

int	main()
{
	
	Span	a(100);
	for (int i = 0; i < 100; i++)
		a.addNumber(i + (i % 2));

	std::cout << LIL << "--- First test case with a 100 numbers --- \n" << RST;
	try
	{
		std::cout << "Longest span: " << a.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << GRN << "Error: " << e.what() << RST << std::endl;
	}
	std::cout << "Shortest span: " << a.shortestSpan() << std::endl;
	
	std::cout << LIL << "--- Second test case INT and vector overflow --- \n" << RST;
	Span	b(2);
	b.addNumber(INT_MAX);
	b.addNumber(INT_MIN);
	try
	{
		std::cout << "Longest span: " << b.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << GRN << e.what() << RST << '\n';
	}
	try
	{
		std::cout << "Shortest span: " << b.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << ORG << e.what() << RST << '\n';
	}
	try
	{
		b.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << GRN << e.what() << RST << '\n';
	}

	std::cout << LIL << "--- Third test case with 10.000 numbers --- \n" << RST;
	int	N = 10000;
	Span	c(N);

	for (int i = 0; i < N; i ++)
	{
		int	x = rand();
		c.addNumber(x);
		//std::cout << " c[" << i << "] = " << x;
	}
	//std::cout << std::endl;
	try
	{
		std::cout << "Longest span: " << c.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YLW << e.what() << RST << '\n';
	}
	try
	{
		std::cout << "Shortest span: " << c.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << YLW << e.what() << RST << '\n';
	}
	
	return 0;	
}
