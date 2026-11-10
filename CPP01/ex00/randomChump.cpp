/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   randomChump.cpp                                ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 12:48:09 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/19 16:57:22 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void randomChump( std::string name )
{
	Zombie zombie(name);

	std::cout << MT << std::endl
			  << "I CALL UPON THE SPIRITS FROM THE DEEP!"
			  << std::endl << std::endl
			  << BW << "AND SUMMON "
			  << BL << name
			  << BW << " FROM THE THEIR "
			  << BB << "STACK" <<BW<< "ED GRAVE."
			  << RT << std::endl << std::endl;

	zombie.announce();

	return ;
}
