/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitul <spitul@student.42berlin.de >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 12:09:57 by spitul            #+#    #+#             */
/*   Updated: 2025/08/29 17:13:35 by spitul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <climits>

#define GRN "\033[38;5;100m"
#define ORG "\033[38;5;208m"
#define YLW "\033[38;5;214m"
#define LIL "\033[38;2;100;80;180m"
#define RST "\033[0m"

class Span
{
	private:
		std::vector<int>	_v;
		unsigned int	_N;
		
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span	&operator=(const Span &other);
		~Span();

		void	addNumber(int nb);

		int		shortestSpan();
		int		longestSpan();
};

#endif
