/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 17:55:13 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 16:16:59 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
	
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other)	: std::stack<T>(other)
{
	
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack &other)
{
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return this->c.rend();
}
