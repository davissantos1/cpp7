/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:14:49 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/30 12:32:28 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T temp = b;
	b = a;
	a = temp;
}

template <typename T>
T	min(T a, T b)
{
	if (b <= a)
		return (b);
	return (a);
}

template <typename T>
T	max(T a, T b)
{
	if (b >= a)
		return (b);
	return (a);
}

#endif
