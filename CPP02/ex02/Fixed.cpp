/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Fixed.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/18 13:11:13 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/09 15:41:31 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

#ifndef DEBUG
# define DEBUG 0
#endif
		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Fixed::Fixed(void) : _rb(0)
{
	if (DEBUG)
		std::cout<<"Default constructor called"<<std::endl;
	return ;
}

Fixed::Fixed(const float raw_bits)
{
	static const int	scaler = 1 << this->_fb;

	if (DEBUG)
		std::cout<<"Float constructor called"<<std::endl;

	this->_rb = roundf(raw_bits * scaler);
	return ;
}

Fixed::Fixed(const int raw_bits)
{
	if (DEBUG)
		std::cout<<"Int constructor called"<<std::endl;

	this->_rb = raw_bits << this->_fb;
	return ;
}

Fixed::Fixed(Fixed const &original)
{
	if (DEBUG)
		std::cout<<"Copy constructor called"<<std::endl;

	*this = original;

	return ;
}

Fixed::~Fixed(void)
{
	if (DEBUG)
		std::cout<<"Destructor called"<<std::endl;
	return ;
}

		     //******************************************************//
	        //                 Getters & Setters                    //
	       //******************************************************//

int Fixed::getRawBits( void ) const
{
	if (DEBUG)
		std::cout<<"getRawBits member function called"<<std::endl;
	return (this->_rb);
}

void Fixed::setRawBits( int const raw )
{
	if (DEBUG)
		std::cout<<"setRawBits member function called"<<std::endl;
	this->_rb = raw;
	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (DEBUG)
		std::cout<<"Copy assignment operator called"<<std::endl;

	if (this == &rhs)
		return(*this);

	this->_rb = rhs.getRawBits();

	return (*this);
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->_rb > rhs._rb);
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->_rb < rhs._rb);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_rb >= rhs._rb);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_rb <= rhs._rb);
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_rb == rhs._rb);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_rb != rhs._rb);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed ret;

	ret._rb = this->_rb + rhs._rb;

	return (ret);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed ret;

	ret._rb = this->_rb - rhs._rb;

	return (ret);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() * rhs.toFloat());

	return (ret);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed ret(this->toFloat() / rhs.toFloat());

	return (ret);
}

Fixed &Fixed::operator++(void)
{
	(this->_rb)++;
	return (*this);
}

Fixed Fixed::operator++(int flag)
{
	Fixed ret(*this);

	(void)flag;
	(this->_rb)++;

	return (ret);
}

Fixed &Fixed::operator--(void)
{
	(this->_rb)--;
	return (*this);
}

Fixed Fixed::operator--(int flag)
{
	Fixed ret(*this);

	(void)flag;
	(this->_rb)--;

	return (ret);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &input)
{
	stream << input.toFloat();

	return (stream);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f2 < f1)
		return (f2);
	return (f1);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f2 < f1)
		return (f2);
	return (f1);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f2 > f1)
		return (f2);
	return (f1);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f2 > f1)
		return (f2);
	return (f1);
}



float Fixed::toFloat( void ) const
{
	static const float	scaler = 1 << this->_fb;
	float				ret;

	ret = (float)(this->_rb) / scaler;

	return (ret);
}

int Fixed::toInt( void ) const
{
	return (this->_rb >> this->_fb);
}
