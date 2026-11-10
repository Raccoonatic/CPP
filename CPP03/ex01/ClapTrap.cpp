/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   ClapTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/20 17:28:08 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/10/06 14:58:01 by lde-san-           ▒ ░██  ██░ ▒          */
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
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

ClapTrap::ClapTrap() : trap_name("Trappy"), hit_points(10), energy_points(10), attack_damage(0)
{
	if (DEBUG)
		std::cout << BW BB "ClapTrap " RT << NR "Default Constructor Called" RT << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : trap_name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	if (DEBUG)
		std::cout << BW BB "ClapTrap " RT << NR "Main Constructor Called" RT << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &original)
{
	if (DEBUG)
		std::cout << BW BB "ClapTrap " RT << NR "Copy Constructor Called" RT << std::endl;

	this->trap_name = original.trap_name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;

	return ;
}

ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << BW BB "ClapTrap " RT << NR "Destructor Called" RT << std::endl;
	return ;
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this == &rhs)
		return(*this);

	this->trap_name = rhs.trap_name;
	this->hit_points = rhs.hit_points;
	this->energy_points = rhs.energy_points;
	this->attack_damage = rhs.attack_damage;

	return (*this);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " wants to attack " << target
				  << BW ". But "<< this->trap_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (this->energy_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
			  	  << BW " attacks " HT << target
			  	  << BW ". But it " BL "fails" BW "! "<< std::endl
				  <<    "Looks like " MT << this->trap_name
				  << BW " Is out of energy!" RT << std::endl << std::endl;
	}
	else
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " attacks " HT << target
				  << BW ", causing " BL << this->attack_damage
				  << BW " points of damage!" RT << std::endl << std::endl;
		this->energy_points--;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " is attacked, but they are already " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if ((unsigned int)this->hit_points < amount)
		this->hit_points = 0;
	else
		this->hit_points -= amount;

	if (this->hit_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " is overwhelmed by their oponent's will! "<<std::endl
                  <<   "And recives " BL << amount
				  << BW " points of damage! They have"
				  << BL " DIED" BW "." RT << std::endl << std::endl;

	}
	else
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " is overwhelmed by their oponent's will! "<<std::endl
                  <<   "And recives " BL << amount
				  << BW " points of damage! They only have "
				  << LM <<this->hit_points
				  << BW " Hit Points left!" RT << std::endl << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << BW " wants to repair themselves"
				  <<   ". But "<< this->trap_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (this->energy_points < 1)
	{
		std::cout << OG "Trap " MT << this->trap_name
			  	  << BW " Tries to repair themselves. But it " BL "fails" BW "! "<< std::endl
				  <<    "Looks like " MT << this->trap_name
				  << BW " Is out of energy!" RT << std::endl << std::endl;
	}
	else
	{
		std::cout << OG "Trap " MT << this->trap_name
				  << LM " repairs " BW "themselves! " << std::endl
				  <<    "They have recovered " LM << amount
				  << BW " Hit points!" RT << std::endl << std::endl;
		this->energy_points--;
		this->hit_points += amount;
	}
	return ;
}
