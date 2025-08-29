/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 19:17:38 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 16:09:45 by spitul           ###   ########.fr       */
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
	

	std::cout << "--------- Forward iterator ---------\n";
	
	for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
		std::cout << "[" << std::distance(stack.begin(), it) << "] = " << *it << std::endl;
	
	std::cout << "--------- Reverse iterator ---------\n";
	
	for (MutantStack<int>::reverse_iterator rit = stack.rbegin(); rit != stack.rend(); rit++)
		std::cout << "[" << std::distance(rit, stack.rend()) << "] = " << *rit << std::endl;	

	const MutantStack<int>	c_stack = stack;
	
	std::cout << "--------- Const forward iterator ---------\n";
	
	for (MutantStack<int>::const_iterator cit = c_stack.begin(); cit != c_stack.end(); cit++)
		std::cout << "[" << std::distance(c_stack.begin(), cit) << "] = " << *cit << std::endl;

	std::cout << "--------- Const reverse iterator ---------\n";
	for (MutantStack<int>::const_reverse_iterator crit = c_stack.rbegin(); crit != c_stack.rend(); crit++)
		std::cout << "[" << std::distance(crit, c_stack.rend()) << "] = " << *crit << std::endl;
		
	return 0;
}
