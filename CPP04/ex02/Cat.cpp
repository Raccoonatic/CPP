/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Cat.cpp                                        ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 10:48:47 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/04 18:13:59 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define LM	"\033[1;38;2;0;255;0m" // Lime
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define OG	"\033[38;2;255;153;51m" // Orange
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Cat::Cat()
{
	std::cout << NR "Animal " << BB << "Cat Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	this->type = "Cat";
	this->_cerebellum = new Brain;

	return ;
}

Cat::Cat(const Cat &original) : AAnimal(original)
{
	std::cout << NR "Animal " << BB << "Cat Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;

	this->_cerebellum = new Brain(*(original._cerebellum));

	return ;
}

Cat::~Cat()
{
	std::cout << NR "Animal " << BB << "Cat Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;

	delete this->_cerebellum;

	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Cat &Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);

	AAnimal::operator=(rhs);

	*(this->_cerebellum) = *(rhs._cerebellum);

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void Cat::makeSound() const
{
	std::cout << BW "This "
			  << OG << this->type << BW " goes "
			  << MT "Meow! Meow! " RT
			  << NR "Like god intended. Praise the Lord, can I get an "
			  << LM "AMEN?" << RT << std::endl;
	return ;
}
