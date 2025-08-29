/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:37:59 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 17:40:28 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iterator>

#define GRN "\033[38;5;100m"
#define ORG "\033[38;5;208m"
#define YLW "\033[38;5;214m"
#define LIL "\033[38;2;100;80;180m"
#define RST "\033[0m"

template<typename T>
typename T::iterator	easyfind(T &container, int val)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), val);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	return it;
}

#endif
