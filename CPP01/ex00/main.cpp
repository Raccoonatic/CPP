/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 13:12:36 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/19 16:57:21 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#include <iostream>

static void intro(void)
{
	std::string stopper;

	std::cout << BB << "/* ***********************************************/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"  ▒▓              ▓▒   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"Welcome to the        "<<MT<<" ▒▒ ▓▓▓        ▓▓▓ ▒▒  "<<BB<<"*/" << std::endl
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

int main(void)
{
	Zombie*		heabie;
	std::string	stopper;

	intro();

	std::cout << GD << "The" <<BL<< " Blood Moon "
			  << GD << "rises once more... "<< std::endl
			  <<	   "And with it, "
			  <<	   "the great necromancer, "
			  << MT << "Ludwig Raccamander "<< std::endl
			  << GD << "awakens his nefarious crew..."
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	heabie = newZombie("Loucust Heapbourne");
	std::getline(std::cin, stopper);

	std::cout << BW << std::endl
			  << "Have you fully leap back to the realm of"
			  << "the living dear friend?"
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	heabie->announce();
	std::getline(std::cin, stopper);

	std::cout << BW << std::endl
			  << "Fantastic. Then I'll keep bringing the gang back together."
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	randomChump("Jeremy Stackly");
	std::getline(std::cin, stopper);

	std::cout << PR << std::endl
			  << "I see... "
			  << NR << "Seems that someone hasn't been treated "
			  << "kindly by their slumber..."
			  << RT << std::endl << std::endl;
	std::getline(std::cin, stopper);
	std::cout << BW << "I guess it's better to recombine another day."
			  << 	   " You may go home as well "<<BL<<"Loucust"<<BW<<"."
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	delete heabie;
	std::getline(std::cin, stopper);

	std::cout << MT << std::endl
			  << 	   "Until we meet again, my dear friends..."
			  << RT <<std::endl << std::endl;

	std::getline(std::cin, stopper);
	std::cout << GD << "The"<<BL<<" Blood Moon "
			  << GD << "fades away once more, and with it, "
			  <<	   "the great necromancer retreats to the shadows of the night."
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	std::cout << LM << std::endl
			  << "Phew... That was a close one. Thank you"
			  << MT << " memory master. "<<LM<<"I owe you one!"
			  << RT << std::endl;

	return (0);
}
