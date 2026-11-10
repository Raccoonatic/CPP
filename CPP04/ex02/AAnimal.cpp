/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   AAnimal.cpp                                    ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 10:30:46 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/09 13:07:33 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define PR	"\033[1;38;2;174;5;252m" // Purple
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

AAnimal::AAnimal()
{
	std::cout << NR "AAnimal " << BB << "Base Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	this->type = "\033[5mM̵̡̙̼̈́̔̕i̴̞͓͚͊͊̓s̵̪͙̠̈́͛N̵͉͙̾͋̚g̴̟̦̻͐͒̿0̴͎͔̝̈́̽͘\033[0m    ";

	return ;
}

AAnimal::AAnimal(const AAnimal &original) : type(original.type)
{
	std::cout << NR "AAnimal " << BB << "Base Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

AAnimal::~AAnimal()
{
	std::cout << NR "AAnimal " << BB << "Base Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

std::string AAnimal::getType() const
{
	return (this->type);
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	if (this == &rhs)
		return (*this);

	this->type = rhs.type;

	return (*this);
}
