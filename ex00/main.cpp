/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:38:38 by spitul            #+#    #+#             */
/*   Updated: 2025/08/24 12:06:28 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int	main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(0);
	v.push_back(8);
	v.push_back(2);
	std::vector<int>::iterator	it;

	try
	{
		it = easyfind(v, 3);
		std::cout << "[" << std::distance(v.begin(), it) << "] = " << *it << std::endl;
	}
	catch (const std::runtime_error &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	try
	{
		it = easyfind(v, 22);
		std::cout << "[" << std::distance(v.begin(), it) << "] = " << *it << std::endl;
	}
	catch (const std::runtime_error &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
