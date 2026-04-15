/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 11:27:19 by dasimoes          #+#    #+#             */
/*   Updated: 2026/04/15 15:12:14 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
std::size_t	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
Array<T>::Array(): _size(0), _data(new T[0]()) {}

template <typename T>
Array<T>::Array( std::size_t n ): _size(n), _data(new T[n]()) {}

template <typename T>
Array<T>::~Array()
{
	if (this->_data)
		delete[] this->_data;
}

template <typename T>
Array<T>::Array( const Array<T>& other ): _size(0), _data(NULL)
{
	if (this != &other)
		*this = other;
}

template <typename T>
Array<T>&	Array<T>::operator=( const Array<T>& other )
{
	if (this != &other)
	{
		T* temp = new T[other._size]();
		for (std::size_t i = 0; i < other._size; i++)
			temp[i] = other._data[i];
		if (this->_data)
			delete [] this->_data;
		this->_size = other._size;
		this->_data = temp;
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[]( std::size_t index )
{
	if (!this->_size || index > this->_size - 1)
		throw (OutOfBoundsException());
	return (this->_data[index]);
}

template <typename T>
const T& Array<T>::operator[]( std::size_t index ) const
{
	if (!this->_size || index > this->_size - 1)
		throw (OutOfBoundsException());
	return (this->_data[index]);
}

template <typename T>
const char*	Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Array error: index out of bounds!");
}

#endif
