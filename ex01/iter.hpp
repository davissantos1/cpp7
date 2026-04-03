/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:14:49 by dasimoes          #+#    #+#             */
/*   Updated: 2026/04/03 11:08:59 by dasimoes         ###   ########.fr       */
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

template <typename T>
void	iter(const T* arr, const std::size_t size, void (*func)(T const &))
{
	if (!arr | !func)
		return ;
	for (std::size_t i = 0; i < size; i++)
		func(arr[i]);
}

template <typename T>
void	iter(T* arr, const std::size_t size, void (*func)(T &))
{
	if (!arr | !func)
		return ;
	for (std::size_t i = 0; i < size; i++)
		func(arr[i]);
}
#endif
