/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/20 18:43:56 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/21 17:24:25 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

static void firstAct(ClapTrap &trappy, ClapTrap &verud)
{
	std::string		stopper;

	trappy.attack("Verudora");
	std::getline(std::cin, stopper);
	verud.takeDamage(5);
	verud.beRepaired(3);
	std::getline(std::cin, stopper);
	verud.attack("Trappy");
	std::getline(std::cin, stopper);
	trappy.takeDamage(7);
	std::getline(std::cin, stopper);
	trappy.beRepaired(1);
	trappy.beRepaired(1);
	trappy.beRepaired(1);
	trappy.beRepaired(1);
	trappy.beRepaired(1);

	return ;
}

static void secondAct(ClapTrap &trappy, ClapTrap &verud)
{
	std::string		stopper;
	ClapTrap	clone(verud);

	std::getline(std::cin, stopper);

	std::cout<<"Trappy gathers all their might. In an attempt to deliver"<<std::endl
		<<"a final attack"<<std::endl;

	std::getline(std::cin, stopper);
	trappy.attack("Verudora (clone)");
	trappy.attack("Verudora (clone)");
	trappy.attack("Verudora (clone)");
	trappy.attack("Verudora (clone)");
	trappy.attack("Verudora (clone)");
	trappy.attack("Verudora (clone)");
	std::getline(std::cin, stopper);
	clone.takeDamage(80);
	std::getline(std::cin, stopper);

	return ;
}

static void finalAct(ClapTrap &trappy, ClapTrap &verud)
{
	std::string		stopper;

	verud.beRepaired(60);

	std::getline(std::cin, stopper);
	std::cout<<"And charges mindlessly at the confused Trappy"<<std::endl;
	std::getline(std::cin, stopper);

	verud.attack("Trappy");
	trappy.takeDamage(100);

	std::getline(std::cin, stopper);
	std::cout<<"It's carnage incarnated... Even Verudora takes damage himself."<<std::endl<<std::endl;
	verud.takeDamage(42);
	std::getline(std::cin, stopper);

	std::cout<<"Trappy in dispair, tries everything with his last breath"<<std::endl;
	std::getline(std::cin, stopper);

	trappy.beRepaired(10);
	trappy.attack("Verudora");
	trappy.beRepaired(10);
	trappy.attack("a rock");
	trappy.beRepaired(10);
	trappy.attack("the floor");
	trappy.beRepaired(10);
	trappy.attack("Trappy");
	std::getline(std::cin, stopper);
	verud.takeDamage(1);

	return ;
}

int	main(void)
{
	ClapTrap	trappy;
	ClapTrap	verud("Verudora Tempest");
	std::string		stopper;

	std::cout<<"The frightful day had arrived, when Trappy and Verudora"<<std::endl
		<<"will have their final match..."<<std::endl;

	std::getline(std::cin, stopper);

	firstAct(trappy, verud);
	std::getline(std::cin, stopper);

	std::cout<<"Verudora feels cornered. Decides to try and make a clone"<<std::endl
		<<"to confuse Trappy."<<std::endl;

	secondAct(trappy, verud);
	std::getline(std::cin, stopper);

	std::cout<<"Is he dead?.. From the shadows, The real Verudora regains his forces"<<std::endl;
	std::getline(std::cin, stopper);

	finalAct(trappy, verud);
	std::getline(std::cin, stopper);

	std::cout<<"Then Trappy, hopeless and lifeless. Manages to whisper his final words"<<std::endl;
	std::getline(std::cin, stopper);

	std::cout<<"\033[1;38;2;55;250;133m"
		<<"Trappy: "
		<<"\033[3m\033[38;2;255;153;51m"
		<<"yoMama.attack(); hit harder last night..."
		<<"\033[0m"<<std::endl;
	std::getline(std::cin, stopper);
	verud.takeDamage(999);

	return (0);
}
