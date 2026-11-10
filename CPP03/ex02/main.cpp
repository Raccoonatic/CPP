/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/20 18:43:56 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/21 22:05:23 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
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

static void first_exercise_tests(void)
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

	return ;
}

static void exhaust(ClapTrap &trap1, ClapTrap &trap2, ClapTrap &trap3)
{
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);
	trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1); trap3.beRepaired(1);

	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1); trap1.beRepaired(1);
	trap1.beRepaired(1);

	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);
	trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1); trap2.beRepaired(1);

	return ;
}

static void battle(void)
{
	ScavTrap		scavy("Scavy");
	ClapTrap		clappy("Clappy");
	FragTrap		fragy;
	std::string		stopper;

	std::cout<< std::endl
		<< "A ScavTrap, FragTrap and ClapTrap object have been created." << std::endl;
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "They can take damage." << std::endl;

	scavy.takeDamage(1);
	fragy.takeDamage(1);
	clappy.takeDamage(1);

	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "They can be repaired." << std::endl;

	scavy.beRepaired(50);
	fragy.beRepaired(50);
	clappy.beRepaired(50);

	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "They can run out of energy." << std::endl;
	std::getline(std::cin, stopper);

	exhaust(scavy, clappy, fragy);
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "They can die." << std::endl;

	scavy.takeDamage(1000);
	fragy.takeDamage(1000);
	clappy.takeDamage(1000);
	scavy.attack("Target Dummy");
	fragy.attack("Target Dummy");
	clappy.attack("Target Dummy");
	scavy.beRepaired(1);
	scavy.guardGate();
	fragy.beRepaired(1);
	fragy.highFivesGuys();
	clappy.beRepaired(1);
	std::getline(std::cin, stopper);


	std::cout<< std::endl
		<< "Exiting function scope... This should destroy the object" << std::endl
		<< "in reverse order of creation." << std::endl;
	std::getline(std::cin, stopper);

	return ;
}

static void	hitem(void)
{
	ScavTrap	scavy("Scavy");
	ClapTrap	clappy("Clappy");
	FragTrap	fragy("RaccTrap");
	std::string		stopper;

	std::cout<< std::endl
		<< "A ScavTrap, FragTrap and ClapTrap object have been created." << std::endl;
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The ScavTrap, FragTrap and ClapTrap will now attack a target. Showcasing that the" << std::endl
		<< "The attack method is different for only one class." << std::endl;
	std::getline(std::cin, stopper);

	clappy.attack("Target Dummy");
	scavy.attack("Target Dummy");
	fragy.attack("Target Dummy");
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The ScavTrap will now guard the gate." << std::endl
		<< "This method is unique to the ScavTrap class." << std::endl;
	getline(std::cin, stopper);

	scavy.guardGate();
	getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The FragTrap will now ask for a High... Wait a minute..." << std::endl;
	std::getline(std::cin, stopper);

	std::cout<< std::endl
	  	<< "Is that what you've been asking for this whole time? A high five?" << std::endl
		<< "You should've said something!" << std::endl;
	std::getline(std::cin, stopper);
	fragy.highFivesGuys();
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "This method is unique to the FragTrap class." << std::endl;
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "Exiting function scope... This should destroy the objects." << std::endl
		<< "in reverse order of creation." << std::endl;
	std::getline(std::cin, stopper);

	return ;
}

static void	clone(void)
{
	ScavTrap	scavy("Helena");
	FragTrap	fragy("RaccTrap");
	std::string		stopper;

	std::cout<< std::endl
		<< "A ScavTrap and a FragTrap object have been created." << std::endl;
	std::getline(std::cin, stopper);


	std::cout<< "They will now take damage to show the atributes being copied correctly." << std::endl
		<< "The takeDamage method is inherited from the ClapTrap class." << std::endl<< std::endl;
	scavy.takeDamage(42);
	fragy.takeDamage(42);
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "Each copy constructor will be called to create a new ScavTrap and FragTrap object." << std::endl
		<< "Because the classes are derived from the ClapTrap class, they need to call" << std::endl
		<< "its default constructor first. The debug messages below should show this." << std::endl << std::endl;
	std::getline(std::cin, stopper);
	ScavTrap	scavy_clone(scavy);
	FragTrap	fragy_clone(fragy);

	std::cout<< std::endl
		<< "The copy constructor has been called. They will now both receive damage to showcase" << std::endl
		<< "That their data is the same." <<std::endl;
	std::getline(std::cin, stopper);

	scavy.takeDamage(1);
	fragy.takeDamage(1);
	std::getline(std::cin, stopper);

	ScavTrap	def_scav;
	FragTrap	def_frag;

	std::cout<< std::endl
		<< "A default ScavTrap & FragTrap have been created. Their assignment operator will be called" << std::endl
		<< "to assign the values of the original objects." << std::endl << std::endl;
	std::getline(std::cin, stopper);

	def_scav = scavy;
	def_frag = fragy;

	std::cout<< std::endl
		<< "The assignment operator has been called. They will now both receive damage to showcase" << std::endl
		<< "That their data is the same." <<std::endl;
	std::getline(std::cin, stopper);

	scavy.takeDamage(1);
	fragy.takeDamage(1);

	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "Exiting function scope... This should destroy the objects in reverse order of creation." << std::endl;
	std::getline(std::cin, stopper);

	return ;
}

static void	filo(void)
{
	ScavTrap	scavy;
	std::string		stopper;
	FragTrap	fragy("RaccTrap");

	std::cout<< std::endl
		<< "The local objects ScavTrap and FragTrap have been created. The ClapTrap should've" << std::endl
		<< "been created first, then ScavTrap, then the ClapTrap again and finally the FragTrap." << std::endl;
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "Exiting function scope... This should destroy the objects" << std::endl
		<< "in reverse order of creation." << std::endl;
	std::getline(std::cin, stopper);

	return ;
}

int	main(void)
{
	std::string		stopper;
	FragTrap	fragy("RaccTrap");

	fragy.highFivesGuys();
	getline(std::cin, stopper);

	std::cout<< std::endl
		<< "Demonstrating order of construction & destruction of objects in inheritance:" << std::endl;

	std::cout<< std::endl
		<< "The following function call, simply defines local objects of type ScavTrap, and FragTrap then returns." << std::endl;
	std::getline(std::cin, stopper);
	filo();
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The following function call, will test the ScavTrap & FragTrap copying capabilities." << std::endl;
	std::getline(std::cin, stopper);
	clone();
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The following function call, will test the attack method, ScavTrap's guard method, "<<std::endl
		<< "and will figure out why FragTrap has his hand raised. " << std::endl<< std::endl;
	hitem();
	std::getline(std::cin, stopper);

	std::cout<< std::endl
		<< "The following function call, will test the remaining methods. Showcasing the ScavTrap and FragTrap's differences." << std::endl;
	battle();
	std::getline(std::cin, stopper);

	std::cout<< std::endl
			 << "The tests for ex01 are done. Starting ex00 tests..." << std::endl;
	std::getline(std::cin, stopper);

	first_exercise_tests();

	return (0);
}
