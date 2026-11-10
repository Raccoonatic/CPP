/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 18:06:25 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 15:51:59 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <ostream>

static void intro(void)
{
	std::string stopper;

	std::cout << BB << "/* ***********************************************/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"  ▒▓              ▓▒   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"Welcome back to the   "<<MT<<" ▒▒ ▓▓▓        ▓▓▓ ▒▒  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"world of necromancy!  "<<MT<<" ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"  █░  ░░░ ░░ ░░░  ░█   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"Hit enter after every "<<MT<<"  ███████░░░░███████   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"dialogue to continue  "<<MT<<" ░▒▒██ ▓  ██  ▓ ██▒▒░  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"the story.            "<<MT<<"     ▒ ░██  ██░ ▒      "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"        ██████         "<<BB<<"*/" << std::endl
			  << BB << "/* ***********************************************/" << std::endl
			  << RT << std::endl;

	std::getline(std::cin, stopper);

	return ;
}

static void firstAct(Zombie *horde)
{
	std::string stopper;

	std::cout<<BW<<std::endl
		 	 <<	   "For my first act, I shall summon an army of "
			 <<MT<<"-1" <<BB<< " Zoldiers..."<<RT<<std::endl;

	std::getline(std::cin, stopper);
	horde = zombieHorde(-1, "Pepe");
	std::getline(std::cin, stopper);

	std::cout<<BW<<std::endl
		 	 <<	   "Ehm... cough cough... I meant to say, "
			 <<MT<<"0" <<BB<< " Zoldiers!"<<RT<<std::endl;

	std::getline(std::cin, stopper);
	horde = zombieHorde(0, "Pepito");
	std::getline(std::cin, stopper);

	std::cout<<BW<<std::endl
		 	 <<	  "ALRIGHT THAT'S ENOUGH BUFFOONERY! "
			 <<MT<<"1" <<BB<< " Zoldier!"<<RT<<std::endl;
	std::getline(std::cin, stopper);

	horde = zombieHorde(1, "Pepito");

	std::cout<<BW<<std::endl
		 	 <<	   "NOW, PERISH" <<RT<<std::endl;
	delete[] horde;
	horde = NULL;
	std::cout<<NR<<std::endl
		 	 <<	   "Oops, my bad, got excited... Let's try that again." <<RT<<std::endl;
	return ;
}

static void secondAct(Zombie *horde)
{
	std::string	stopper;

	std::cout<<BW<<std::endl
		 	 <<	   "For my next act, I shall summon an army of "
			 <<MT<<"5" <<BB<< " Zoldiers..."<<RT<<std::endl;

	std::getline(std::cin, stopper);
	horde = zombieHorde(5, "Pepe");
	std::getline(std::cin, stopper);

	std::cout<<MT<<std::endl
		 	 <<	   "HAHAHA WITNESS MY POWER, MORTALS!"<<RT<<std::endl;
	std::getline(std::cin, stopper);

	std::cout<<BW<<std::endl
		 	 <<	   "Zoldiers, I command you to tell me your "
			 <<HT<<"names!"<<RT<<std::endl;

	for (int i = 0; i < Zombie::getTotalZombieCounter(); i++)
		horde[i].shoutName();
	std::getline(std::cin, stopper);

	std::cout<<BB<<std::endl
		 	 <<	   "Very well, Zoldiers. Now, rest my army, and return to the netherworld."<<RT<<std::endl;

	delete[] horde;
	horde = NULL;
	return ;
}

static void finalAct(Zombie *horde)
{
	std::string	stopper;

	std::cout<<BW<<std::endl
		 	 <<	   "And for my final act, I shall summon... ";
	std::getline(std::cin, stopper);
	std::cout<<MT<<"100 " <<BB<< "ZOLDIERS!!!!"<<RT<<std::endl;

	std::getline(std::cin, stopper);
	horde = zombieHorde(100, "Tito");
	std::getline(std::cin, stopper);

	std::cout<<MT<<std::endl
		 	 <<	   "HAHAHAHAHAHA I'M UNSTOPPABLE!"<<RT<<std::endl;
	std::getline(std::cin, stopper);

	std::cout<<BW<<std::endl
		 	 <<	   "ZOLDIERS!!! TELL ME YOUR "
			 <<HT<<"NAMES!"<<RT<<std::endl;

	for (int i = 0; i < Zombie::getTotalZombieCounter(); i++)
		horde[i].shoutName();
	std::getline(std::cin, stopper);

	std::cout<<NR<<std::endl
		 	 <<	   "OooOo... I overdid it... I'm sorry, ZOLDIERS! I'm loosing control!"<<RT<<std::endl;
	std::getline(std::cin, stopper);
	delete[] horde;
	horde = NULL;
	return ;
}

int	main(void)
{
	Zombie	*horde;
	std::string	stopper;

	horde = NULL;

	intro();
	std::cout<<GD<<std::endl
			 <<"The"<<BL<< " Blood Moon "<<GD
			 <<"rises once more... "<<std::endl
			 <<"And with it, "
			 <<"the great necromancer, "<<MT
			 <<"Ludwig Raccamander "<<GD<<std::endl
			 <<"releases his nefarious platoon..."
			 <<RT<<std::endl;

	std::getline(std::cin, stopper);
	firstAct(horde);
	std::getline(std::cin, stopper);
	secondAct(horde);
	std::getline(std::cin, stopper);
	finalAct(horde);
	std::getline(std::cin, stopper);

	std::cout << GD << "And the"<<BL<<" Blood Moon "
			  << GD << "fades away once more. With it, defeated by his own hubris, "
			  << std::endl <<"the great necromancer crawls to the shadows once more."
			  << RT << std::endl;

	return (0);
}
