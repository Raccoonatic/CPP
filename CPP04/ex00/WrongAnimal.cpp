/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   WrongAnimal.cpp                                ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 10:30:46 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/24 19:02:35 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
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

WrongAnimal::WrongAnimal()
{
	std::cout << NR "WrongAnimal " << BB << "Base Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	this->type = "\033[5mM̵̡̙̼̈́̔̕i̴̞͓͚͊͊̓s̵̪͙̠̈́͛N̵͉͙̾͋̚g̴̟̦̻͐͒̿0̴͎͔̝̈́̽͘\033[0m     ";

	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &original) : type(original.type)
{
	std::cout << NR "WrongAnimal " << BB << "Base Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << NR "WrongAnimal " << BB << "Base Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

std::string WrongAnimal::getType() const
{
	return (this->type);
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this == &rhs)
		return (*this);

	this->type = rhs.type;

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void WrongAnimal::makeSound() const
{
	std::cout << BW "This " << this->type
			  << PR " WrongAnimal " BW << "goes "
			  << MT << "\033[5mK4̴̡͎͎͆͘Ao̴̡͕͍͐͆R4̸͇̪̻͋̕-̵̢͔͔͑̒NǸ̴͚̪͉̀͝A0̸̦̟̻͊̚G0̴͉̙̪̈́͛͘t̴̘͎̫̓̈́́Ef̵̦̼̟͌̀͘n̴͕͎͍̔\033[0m" << std::endl
			  << NR <<"You shouldn't try talking to it. "
			  << GD << "They seem unfriendly." << RT << std::endl;
	return ;
}
