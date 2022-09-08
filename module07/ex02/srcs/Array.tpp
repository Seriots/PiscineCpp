/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgiband <lgiband@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:52:04 by lgiband           #+#    #+#             */
/*   Updated: 2022/09/06 13:38:56 by lgiband          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
	for (unsigned int i = 0; i < n; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(Array const &src) : _array(new T[src._size]), _size(src._size)
{
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] _array;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		delete [] _array;
		_array = new T[rhs._size];
		_size = rhs._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
T		&Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw Array<T>::OutOfRangeException();
	return (_array[i]);
}

template <typename T>
T const		&Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw Array<T>::OutOfRangeException();
	return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
const char *Array<T>::OutOfRangeException::what() const throw()
{
	return ("Out of range");
}
#endif