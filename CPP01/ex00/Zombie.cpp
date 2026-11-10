/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Zombie.cpp                                     ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 11:26:12 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/19 16:57:21 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

		     //******************************************************//
	        //              Constructor & Destructor                //
	       //******************************************************//

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout <<GD<< this->name <<NR<< " has returned to the netherworld." <<RT<< std::endl;
}

		     //******************************************************//
	        //                    Announcement                      //
	       //******************************************************//

void Zombie::announce(void)
{
	std::cout <<PK<< this->name <<HT<< ": BraiiiiiiinnnzzzZ..." <<RT<< std::endl;
}
