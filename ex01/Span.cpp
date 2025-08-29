/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:11:23 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 17:00:08 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int N)	: _N(N)
{
	
}

Span::Span(const Span &other)
{
	this->_v = other._v;
	this->_N = other._N;
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		_v = other._v;
		_N = other._N;
	}
	return *this;
}

Span::~Span()
{
	
}

void	Span::addNumber(int nb)
{
	if (_v.size() >= _N)
		throw std::length_error("Span vector already full");
	_v.push_back(nb);
}

int		Span::shortestSpan()
{
	int	min = INT_MAX;

	if (_v.size() > 1)
	{		
		std::vector<int>	a = _v;
		std::sort(a.begin(), a.end());
		for (size_t i = 1; i < a.size(); i++)
		{
			if (a[i] - a[i - 1] < min)
				min = a[i] - a[i - 1];
		}
	}
	else 
		throw std::length_error("Vector does not have two elements");
	return min;
}

int		Span::longestSpan()
{
	long	diff;
	
	if (_v.size() < 2)
		throw std::length_error("Vector does not contain two elements");
	std::vector<int>::iterator	minit = std::min_element(_v.begin(), _v.end());
	std::vector<int>::iterator	maxit = std::max_element(_v.begin(), _v.end());
	diff = static_cast<long>(*maxit) - static_cast<long>(*minit);
	if (diff > INT_MAX || diff < INT_MIN)
		throw std::overflow_error("Longest span overflows int"); 
	return diff;
}
