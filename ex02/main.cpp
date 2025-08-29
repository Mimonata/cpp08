/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:17:38 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 06:23:07 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main()
{
	MutantStack<int>	stack;

	stack.push(2);
	stack.push(3);
	stack.push(5);
	stack.push(22);
	
	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << "[" << std::distance(stack.begin(), it) << "] = " << *it << std::endl;
	
	std::cout << "--------- Reverse iterator ---------\n";
	
	for (MutantStack<int>::reverse_iterator rit = stack.rbegin(); rit != stack.rend(); rit++)
		std::cout << "[" << std::distance(rit, stack.rend()) << "] = " << *rit << std::endl;	
	return 0;
}
