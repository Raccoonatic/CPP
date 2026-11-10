/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   zombieHorde.cpp                                ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 17:02:07 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/10 22:23:30 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde;

	if (N <= 0)
	{
		std::cout << NR << "If you didn't wanna raise an army "
				  << 	   "of the dead with me " << std::endl
				  <<	   "you could've just said so. There's "
				  << 	   "no need to be passive aggressive."
				  << RT << std::endl;
		return (NULL);
	}

	horde = new Zombie[N];

	std::cout << MT << std::endl
			  << 	   "I CALL UPON THE SPIRITS FROM THE DEEP!"
			  << 	   std::endl << std::endl
			  << PR << "AND SUMMON MY UNDEAD HORDE OF " << N << " ZOLDIERS"
			  << 	   std::endl << std::endl
			  << BB << "YEE SHALL FACE THE WRATH OF MY LEGION OF "
			  << PK << name << BB << "S!"
			  << RT << std::endl;

	for (int i = 0; i < N; i++)
		horde[i].setName(name);

	return (horde);
}
