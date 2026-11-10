/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   WrongCat.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 10:48:47 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/04 17:41:53 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
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

WrongCat::WrongCat()
{
	std::cout << NR "WrongAnimal " << BB << "WrongCat Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	this->type = "WrongCat";

	return ;
}

WrongCat::WrongCat(const WrongAnimal &original) : WrongAnimal(original)
{
	std::cout << NR "WrongAnimal " << BB << "WrongCat Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << NR "WrongAnimal " << BB << "WrongCat Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if (this == &rhs)
		return (*this);

	WrongAnimal::operator=(rhs);

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void WrongCat::makeSound() const
{
	std::cout << BW "This "
			  << OG << this->type << BW " goes "
			  << MT "Yes, it's me. Cat. " RT
			  << NR "Praised be glorb, may I ask for an " RT
			  << LM "UwU?" << RT << std::endl;
	return ;
}
