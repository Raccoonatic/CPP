/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   newZombie.cpp                                  ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 12:35:41 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/19 16:57:22 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

Zombie* newZombie(std::string name)
{
	Zombie* zombie;

	std::cout << MT << std::endl
			  << "I CALL UPON THE SPIRITS FROM THE DEEP!"
			  << std::endl << std::endl
			  << BW << "AND SUMMON "
			  << BL << name
			  << BW << " FROM THE THEIR "
			  << OG << "HEAP" <<BW<< "ING GRAVE."
			  << RT << std::endl;

	zombie = new Zombie(name);

	return (zombie);
}
