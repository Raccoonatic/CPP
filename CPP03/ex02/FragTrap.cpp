/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   FragTrap.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/21 18:25:26 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/21 22:30:24 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
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
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

FragTrap::FragTrap()
{
	this->trap_name = "Froggy Nelson";
	this->hit_points += 90;
	this->energy_points += 90;
	this->attack_damage = 30;

	if (DEBUG)
		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Default Constructor Called" RT << std::endl;

	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->trap_name = name;
	this->hit_points += 90;
	this->energy_points += 90;
	this->attack_damage = 30;

	if (DEBUG)
		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Main Constructor Called" RT << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &original) : ClapTrap()
{
	if (DEBUG)
		std::cout << BW GD "FragTrap " RT << NR "Copy Constructor Called" RT << std::endl;

	this->trap_name = original.trap_name;
	this->hit_points = original.hit_points;
	this->energy_points = original.energy_points;
	this->attack_damage = original.attack_damage;

	return ;
}

FragTrap::~FragTrap()
{
	if (DEBUG)
		std::cout << BW GD "FragTrap " MT << this->trap_name << RT NR " Destructor Called" RT << std::endl;

	return ;
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void	FragTrap::highFivesGuys(void)
{
	static bool	high_five = true;

	if (this->hit_points < 1)
	{
		std::cout << GD "FragTrap " MT << this->trap_name
				  << BW " wants to give you a high five!"
				  << BW ". But "<< this->trap_name
				  <<" is " BL "DEAD" BW "." RT << std::endl << std::endl;
		return ;
	}

	if (high_five)
	{
		std::cout << LM "++"
				  << GD "FragTrap " MT << this->trap_name
				  << BW " wants to give you a high five!" << LM "++" RT << std::endl << std::endl;
		high_five = false;
	}
	else
	{
		std::cout << LM "++"
				  << GD "FragTrap " MT << this->trap_name
				  << BW " has been hanging for a bit. " <<std::endl
				  << "But you've finally returned the high five!"<< HT " Yey! " << LM "++" RT <<  std::endl << std::endl;
		high_five = true;
	}

	return ;
}
