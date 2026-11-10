/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   ClapTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/20 17:28:08 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/27 12:34:07 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#ifndef DEBUG
# define DEBUG 1
#endif

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define LM	"\033[1;38;2;0;255;0m" // Lime
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define BL	"\033[1;38;2;255;0;0m" // Blood Red
# define OG	"\033[38;2;255;153;51m" // Orange
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

ClapTrap::ClapTrap() : _name("Clappy Trappy"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	if (DEBUG)
		std::cout << NR "Default Constructor Called" RT << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	if (DEBUG)
		std::cout << NR "Main Constructor Called" RT << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	if (DEBUG)
		std::cout << NR "Copy Constructor Called" RT << std::endl;

	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;

	return ;
}

ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << NR "Destructor Called" RT << std::endl;
	return ;
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this == &rhs)
		return(*this);

	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " wants to attack " << target
				  << BW ". But "<< this->_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (this->_energy_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
			  	  << BW " attacks " HT << target
			  	  << BW ". But it " BL "fails" BW "! "<< std::endl
				  <<    "Looks like " MT << this->_name
				  << BW " Is out of energy!" RT << std::endl << std::endl;
	}
	else
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " attacks " HT << target
				  << BW ", causing " BL << this->_attack_damage
				  << BW " points of damage!" RT << std::endl << std::endl;
		this->_energy_points--;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " is attacked, but they are already " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if ((unsigned int)this->_hit_points < amount)
		this->_hit_points = 0;
	else
		this->_hit_points -= amount;

	if (this->_hit_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " is overwhelmed by their oponent's will! "<<std::endl
                  <<   "And recives " BL << amount
				  << BW " points of damage! They have"
				  << BL " DIED" BW "." RT << std::endl << std::endl;

	}
	else
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " is overwhelmed by their oponent's will! "<<std::endl
                  <<   "And recives " BL << amount
				  << BW " points of damage! They only have "
				  << LM <<this->_hit_points
				  << BW " Hit Points left!" RT << std::endl << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << BW " wants to repair themselves"
				  <<   ". But "<< this->_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (this->_energy_points < 1)
	{
		std::cout << OG "ClapTrap " MT << this->_name
			  	  << BW " Tries to repair themselves. But it " BL "fails" BW "! "<< std::endl
				  <<    "Looks like " MT << this->_name
				  << BW " Is out of energy!" RT << std::endl << std::endl;
	}
	else
	{
		std::cout << OG "ClapTrap " MT << this->_name
				  << LM " repairs " BW "themselves! " << std::endl
				  <<    "They have recovered " LM << amount
				  << BW " Hit points!" RT << std::endl << std::endl;
		this->_energy_points--;
		this->_hit_points += amount;
	}
	return ;
}
