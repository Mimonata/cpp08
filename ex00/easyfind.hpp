/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 10:37:59 by spitul            #+#    #+#             */
/*   Updated: 2025/08/24 12:04:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <iterator>

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
