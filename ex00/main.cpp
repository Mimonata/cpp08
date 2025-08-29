/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:38:38 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 17:44:43 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>

int	main()
{
	std::vector<int>::iterator it;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(0);
	v.push_back(8);
	v.push_back(2);

	std::cout << YLW << "--- Vector ---\n" << RST;
	try
	{
		it = easyfind(v, 3);
		std::cout << "[" << std::distance(v.begin(), it) << "] = " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << GRN << "Error: " << e.what() << RST << std::endl;
	}

	try
	{
		it = easyfind(v, 22);
		std::cout << "[" << std::distance(v.begin(), it) << "] = " << *it << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << GRN << "Error: " << e.what() << RST << std::endl;
	}
	
	std::list<int>::iterator	lit;
	std::list<int>	l;
	l.push_back(3);
	l.push_back(9);
	l.push_back(1);
	
	std::cout << ORG << "--- List ---\n" << RST;
	try
	{
		lit = easyfind(l, 3);
		std::cout << "[" << std::distance(l.begin(), lit) << "] = " << *lit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << GRN << "Error: " << e.what() << RST << std::endl;
	}

	try
	{
		lit = easyfind(l, 22);
		std::cout << "[" << std::distance(l.begin(), lit) << "] = " << *lit << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << GRN << "Error: " << e.what() << RST << std::endl;
	}
	
	return 0;
}
