/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:14:49 by dasimoes          #+#    #+#             */
/*   Updated: 2026/04/15 15:03:27 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	private:
		std::size_t	_size;
		T*			_data;
	public:
		Array();
		~Array();
		Array( std::size_t n );
		Array( const Array<T>& other );
		Array<T>&		operator=( const Array<T>& other );
		T&				operator[]( std::size_t index );
		const T&		operator[]( std::size_t index ) const;
		class OutOfBoundsException: public std::exception
		{
			virtual const char*	what() const throw();
		};
		std::size_t		size() const;
};

# include "Array.tpp"

#endif
