/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Zombie.cpp                                     ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 11:26:12 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/20 20:07:18 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int Zombie::_totalZombieCounter = 0;

		     //******************************************************//
	        //              Constructor & Destructor                //
	       //******************************************************//

Zombie::Zombie(void)
{
	this->_id = ++Zombie::_totalZombieCounter;
	return ;
}

Zombie::~Zombie(void)
{
	Zombie::_totalZombieCounter--;

	std::cout <<MT<< "Zoldier "
			  <<BB<< this->_name
			  <<LM<< " ID: " << this->_id
			  <<NR<< " has returned to the netherworld." <<RT<< std::endl;
}

		     //******************************************************//
	        //                    Announcement                      //
	       //******************************************************//

void	Zombie::announce(void)
{
	std::cout <<     std::endl
			  <<HT<< "Zoldier "
			  <<PK<< this->_name
			  <<OG<< " ID: " << this->_id
			  <<LM<< " has awakened." <<RT<< std::endl<< std::endl;
	std::cout <<PK<< this->_name << "_" << this->_id <<HT<< ": BraiiiiiiinnnzzzZ..." <<RT<< std::endl;
}

void	Zombie::shoutName(void)
{
	std::cout <<std::endl
			  <<HT<< "Raaaawrrr! Zoldier "
			  <<PK<< this->_name
			  <<HT<< " the " << OG << this->_id;

	if (this->_id == 1)
		std::cout << "st ";
	else if (this->_id == 2)
		std::cout << "nd ";
	else if (this->_id == 3)
		std::cout << "rd ";
	else
		std::cout << "th ";

	std::cout <<HT<< "reporting for undead duty and BrAAAiinnzzzZ!" <<RT<< std::endl;
}
		     //******************************************************//
	        //                    Setter & Getter                   //
	       //******************************************************//

void	Zombie::setName(std::string name)
{
	this->_name = name;
	this->announce();
}

int	Zombie::getTotalZombieCounter(void)
{
	return (Zombie::_totalZombieCounter);
}
