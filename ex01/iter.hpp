/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:14:49 by dasimoes          #+#    #+#             */
/*   Updated: 2026/03/30 19:15:03 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	incrementElem(T& elem)
{
	elem++;
}

template <typename T>
void	printConstElem(const T& elem)
{
	std::cout << elem << " ";
}

template <typename T, typename F>
void	iter(T* arr, const std::size_t size, F func)
{
	for (std::size_t i = 0; i < size; i++)
		func(arr[i]);
}

#endif
