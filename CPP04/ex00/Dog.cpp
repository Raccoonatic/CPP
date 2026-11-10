/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Dog.cpp                                        ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 10:48:47 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/24 19:02:32 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define LM	"\033[1;38;2;0;255;0m" // Lime
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Dog::Dog()
{
	std::cout << NR "Animal " << BB << "Dog Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	this->type = "Dog";

	return ;
}

Dog::Dog(const Dog &original) : Animal(original)
{
	std::cout << NR "Animal " << BB << "Dog Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << NR "Animal " << BB << "Dog Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Dog &Dog::operator=(const Dog &rhs)
{
	if (this == &rhs)
		return (*this);

	Animal::operator=(rhs);

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void Dog::makeSound() const
{
	std::cout << BW "This "
			  << LM << this->type << BW " goes"
			  << MT " Ruff! Ruff! cough..." RT
			  << NR " He was having a cigarrete before coming over."
			  << HT " Very, unprofessional" << RT << std::endl;
	return ;
}
