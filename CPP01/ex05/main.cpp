/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/16 22:11:13 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/17 13:19:14 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

static void intro(void)
{
	std::string stopper;

	std::cout << MT << "/* ***********************************************/" << std::endl
			  << MT << "/*  "<<OG<<"                      "<<BB<<"  ▒▓              ▓▒   "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"  Welcome to Space!   "<<BB<<" ▒▒ ▓▓▓        ▓▓▓ ▒▒  "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"or maybe not so much.."<<BB<<" ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒  "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"                      "<<BB<<"  █░  ░░░ ░░ ░░░  ░█   "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"Hit enter after every "<<BB<<"  ███████░░░░███████   "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"dialogue to continue  "<<BB<<" ░▒▒██ ▓  ██  ▓ ██▒▒░  "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"the story.            "<<BB<<"     ▒ ░██  ██░ ▒      "<<MT<<"*/" << std::endl
			  << MT << "/*  "<<OG<<"                      "<<BB<<"        ██████         "<<MT<<"*/" << std::endl
			  << MT << "/* ***********************************************/" << std::endl
			  << RT << std::endl;

	std::getline(std::cin, stopper);

	return ;
}

int	main(void)
{
	Harl		engineer;
	std::string	stopper;

	intro();

	std::cout<<NR<< "We find our hero, Liutenent "
			 <<MT<< "Lewis Racckinder"<<RT<<std::endl
			 <<NR<< "On the crash site of his space vessel. "<<std::endl
			 <<		"Attempting to contact his mentally challenged "
			 <<		"Engineering Official. "<<OG<<"Harl."<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	std::cout<<MT<< "Mister Harl! Is everyone ok in the Proton"<<std::endl
			 <<		"Colider Bay? I need a damage report "<<HT<<"STAT. "<<std::endl
			 <<MT<< "Please run the "<<BB<<"ERROR "
			 <<MT<< "protocol."<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	engineer.complain("ERROR");

	std::getline(std::cin, stopper);

	std::cout<<MT<< "What? What are you talking about? This is commander "<<std::endl
			 <<GD<< "Racckinder "<<MT<<"speaking. I'm the highest ranked official "<<std::endl
			 << 	"in this vessel. Who else would you need to speak to? "<<std::endl
			 <<		"Let me be clear. I am demanding that you initiate the "<<std::endl
			 <<BB<< "DEBUG "<<MT<<"sequence immediately!"<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	engineer.complain("DEBUG");

	std::getline(std::cin, stopper);

	std::cout<<MT<< "What is this obssesion with burgers all of the sudden?"<<std::endl
			 << 	"Are you experiencing some sort of concussion or whiplash "<<std::endl
			 <<		"from the emergency landing? Please provide more "
			 <<BB<< "INFO "<<OG<<"mr. Harl."<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	engineer.complain("INFO");

	std::getline(std::cin, stopper);

	std::cout<<MT<< "This is ridiculous. We are in the middle of an emergency "<<std::endl
			 <<OG<< "mr. Harl."<<MT<<" Please proceed with the corresponding protocols "<<std::endl
			 <<LM<< "ASAP. "<<MT<<"This will be your final "<<BB<< "WARNING. "<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	engineer.complain("WARNING");

	std::getline(std::cin, stopper);

	std::cout<<GD<<"BOFOON! ENOUGH WITH THIS MOCKERY. "<<std::endl
			 <<MT<<"I'M COMING DOWN INTO THE BAY TO FIX IT MYSELF."<<std::endl
			 <<MT<<"YOU MAY PROCEED WITH YOUR "<<BB<<"BACON "<<MT<<"AND STICK IT UP YH-"<<RT<<std::endl<<std::endl;

	std::getline(std::cin, stopper);

	engineer.complain("BACON");

	std::getline(std::cin, stopper);

	std::cout<<MT<<"AGGGHH!!! END OF TRANSMISION."<<RT<<std::endl<<std::endl;

	return (0);
}
