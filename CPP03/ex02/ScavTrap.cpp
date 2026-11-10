/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   ScavTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/21 09:39:27 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/21 17:24:04 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
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
# define PR	"\033[1;38;2;174;5;252m" // Purple
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

ScavTrap::ScavTrap() : ClapTrap("Scavy")
{
	if (DEBUG)
		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;

	this->trap_name = "Scavy";
	this->hit_points += 90;
	this->energy_points += 40;
	this->attack_damage = 20;

	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	if (DEBUG)
		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;

	this->trap_name = name;
	this->hit_points += 90;
	this->energy_points += 40;
	this->attack_damage = 20;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &original) : ClapTrap()
{
	if (DEBUG)
		std::cout << BW PR "ScavTrap " RT << NR "Copy Constructor Called" RT << std::endl;

	this->trap_name = original.trap_name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;

	return ;
}

ScavTrap::~ScavTrap()
{
	if (DEBUG)
		std::cout << BW PR "ScavTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;
	return ;
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_points < 1)
	{
		std::cout << PR "ScavTrap " MT << this->trap_name
				  << BW " wants to scav up " << target
				  << BW ". But "<< this->trap_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (this->energy_points < 1)
	{
		std::cout << PR "ScavTrap " MT << this->trap_name
			  	  << BW " scavenges " HT << target
			  	  << BW ". But it " BL "fails" BW "! "<< std::endl
				  <<    "Looks like " MT << this->trap_name
				  << BW " Is out of energy!" RT << std::endl << std::endl;
	}
	else
	{
		std::cout << PR "ScavTrap " MT << this->trap_name
				  << BW " scavenges " HT << target
				  << BW ", causing " BL << this->attack_damage
				  << BW " points of damage!" RT << std::endl << std::endl;
		this->energy_points--;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->hit_points < 1)
	{
		std::cout << PR "ScavTrap " MT << this->trap_name
				  << BW " wants to guard the gate"
				  << BW ". But "<< this->trap_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	std::cout << PR "ScavTrap " MT << this->trap_name
			  << BW " is now guarding the gate!" RT << std::endl << std::endl;

	return ;
}
