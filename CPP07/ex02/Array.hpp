/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoinus <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 21:19:45 by acoinus           #+#    #+#             */
/*   Updated: 2022/06/23 21:56:10 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ARRAY_H
# define	ARRAY_H

template <typename T>
class Array
{

	public:
		Array(void) : _size(0), _array(NULL) {}

		Array(unsigned int n) : _size(n){
			if (this->_size < 0)
				throw Array::overflowException();
			this->_array = new T[_size];}

		Array(const Array &src){
			*this = src;}

		~Array(void){
			delete[] this->_array;}

		Array & operator=(const Array & rhs){
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
			return *this;}

		T & operator[](int i){
			if (i >= static_cast<int>(this->_size) || i < 0)
				throw Array::overflowException();
			return this->_array[i];}

	private :
		unsigned int	_size;
		T				*_array;


	class	overflowException : public std::exception{
		public :
			virtual const char * what() const throw()
				{return("Index is invalid");}};
};


#endif
