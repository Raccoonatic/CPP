/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Fixed.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/18 13:11:13 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/09 13:07:24 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Fixed::Fixed(void) : _rb(0)
{
	std::cout<<"Default constructor called"<<std::endl;
	return ;
}

Fixed::Fixed(const float raw_bits)
{
	static const int	scaler = 1 << this->_fb;

	std::cout<<"Float constructor called"<<std::endl;

	this->_rb = roundf(raw_bits * scaler);
	return ;
}

Fixed::Fixed(const int raw_bits)
{
	std::cout<<"Int constructor called"<<std::endl;

	this->_rb = raw_bits << this->_fb;
	return ;
}

Fixed::Fixed(Fixed const &original)
{
	std::cout<<"Copy constructor called"<<std::endl;

	*this = original;

	return ;
}

Fixed::~Fixed(void)
{
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

		     //******************************************************//
	        //                 Getters & Setters                    //
	       //******************************************************//

int Fixed::getRawBits( void ) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->_rb);
}

void Fixed::setRawBits( int const raw )
{
	std::cout<<"setRawBits member function called"<<std::endl;
	this->_rb = raw;
	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout<<"Copy assignment operator called"<<std::endl;

	if (this == &rhs)
		return(*this);

	this->_rb = rhs.getRawBits();

	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &input)
{
	stream << input.toFloat();

	return (stream);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

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
