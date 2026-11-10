/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/18 18:43:35 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/20 16:58:07 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

static void myTests(void)
{
	Fixed		a;
	const float	nice = 69;

	std::cout << std::endl << "\t//Mapache's Tests//"<<std::endl;

	std::cout << "Fixed a was initialized with: "<< a << std::endl;
	std::cout << "Now a will be set to: "<< nice << std::endl;
	a.setRawBits(69);
	std::cout << nice << " divided by 256 is: "<< (nice / 256) << std::endl;
	std::cout << "Which should be same as the current value of a: "<< a << std::endl << std::endl;

	float i = 1;
	Fixed b((i / 256));
	Fixed c(2);

	std::cout << "float i was initialized with: "<< i << std::endl;
	std::cout << "Shifting that 8 bits to the right gives us: " << (i / 256) << std::endl;
	std::cout << "Giving us the minimum possible value." << std::endl;
	std::cout << "Fixed b was initializated to this minimal value, and Fixed c to: " << c << std::endl;
	std::cout << "Therefore, multipliying b * c: " << (b * c) << std::endl;
	std::cout << "Should be the same as ++b: " << (++b) << std::endl << std::endl;

	std::cout << "Now b = " << b << std::endl;
	std::cout << "And doing b++ should show the same vaulue: " << b++ << std::endl;
	std::cout << "Even if b becomes: " << b << " right after that." << std::endl;
	std::cout << "An doing these operations: b++; b--; --b;" << std::endl;
	b++;
	b--;
	--b;
	std::cout << "Should bring us right back to: " << b << std::endl << std::endl;

	std::cout << "Now Let's compare a and b" << std::endl;
	std::cout << "a is the same as b: " << (a == b) << std::endl;
	std::cout << "Sorry, I meant that they are different: " << (a != b) << std::endl;
	std::cout << "I see... And which one is bigger?: " << Fixed::max(a, b) << std::endl;
	std::cout << "You gave me a number... Was that a?: " << (a > b) << std::endl;
	std::cout << "Was that b?: " << (a < b) << std::endl;
	std::cout << "So between a and b, the smallest is: " << Fixed::min(a, b) << std::endl;
	std::cout << "Alright, got it. Thanks! Good bye." << std::endl << std::endl;

	return ;
}

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "\t//Subject's Tests//"<<std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	myTests();

	return 0;
}
