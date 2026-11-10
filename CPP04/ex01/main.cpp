/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 16:39:52 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/26 12:20:15 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <ostream>
#include <string>

#ifndef n_ani
# define n_ani 10
#endif

void raccTests(void)
{
	std::string stopper;

	std::cout << "The following will test every aspect of all classes" << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "Creating an instance of every class" << std::endl;

	Animal ani;
	std::cout << "ani the Animal has been born" << std::endl<< std::endl;

	Cat cat;
	std::cout << "cat the Cat has been born" << std::endl<< std::endl;

	Dog dog;
	std::cout << "dog the Dog has been born" << std::endl<< std::endl;

	WrongAnimal w_ani;
	std::cout << "w_ani the WrongAnimal has been born" << std::endl<< std::endl;

	WrongCat w_cat;
	std::cout << "w_cat the WrongCat has been born" << std::endl<< std::endl;

	std::cout << "Testing the makeSound() function" << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "ani: ";
	ani.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "cat: ";
	cat.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "dog: ";
	dog.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "w_ani: ";
	w_ani.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "w_cat: ";
	w_cat.makeSound();
	std::cout << std::endl << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "Testing the Copy Constructors" << std::endl;

	Animal ani2(ani);
	Cat cat2(cat);
	Dog dog2(dog);
	WrongAnimal w_ani2(w_ani);
	WrongCat w_cat2(w_cat);
	std::getline(std::cin, stopper);

	std::cout << "The Copies and the originals should display the same makeSound()" << std::endl;

	std::cout << "ani: ";
	ani.makeSound();
	std::cout << std::endl;
	std::cout << "ani2: ";
	ani2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "cat: ";
	cat.makeSound();
	std::cout << std::endl;
	std::cout << "cat2: ";
	cat2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "dog: ";
	dog.makeSound();
	std::cout << std::endl;
	std::cout << "dog2: ";
	dog2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "w_ani: ";
	w_ani.makeSound();
	std::cout << std::endl;
	std::cout << "w_ani2: ";
	w_ani2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "w_cat: ";
	w_cat.makeSound();
	std::cout << std::endl;
	std::cout << "w_cat2: ";
	w_cat2.makeSound();
	std::cout << std::endl << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "Testing the assignment operator" << std::endl;
	ani = cat2;
	ani2 = dog2;
	w_ani = w_cat2;

	std::cout << "The assigned objects should display the same type in their makeSound()" << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "ani: ";
	ani.makeSound();
	std::cout << std::endl;
	std::cout << "cat2: ";
	cat2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "ani2: ";
	ani2.makeSound();
	std::cout << std::endl;
	std::cout << "dog2: ";
	dog2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "w_ani: ";
	w_ani.makeSound();
	std::cout << std::endl;
	std::cout << "w_cat2: ";
	w_cat2.makeSound();
	std::cout << std::endl << std::endl;

	std::cout << "The Brain classe's attributes are inaccessible." << std::endl;
	std::cout << "All functions will now run and the way to check that they worked" << std::endl;
	std::cout << "Will be the debug messages, and the fact that the program runs without errors." << std::endl;
 	std::getline(std::cin, stopper);

	Brain brn;
	Brain brn2(brn);
	brn = brn2;

 	std::getline(std::cin, stopper);
	std::cout << std::endl << std::endl;
	std::cout << "All test objects will now be deleted as the functuion returns" << std::endl
			  << "the proper destructor for each one should be called." << std::endl << std::endl;

 	std::getline(std::cin, stopper);

	return ;
}

void subjectTests(void)
{
	std::string stopper;

	std::cout << "The following will run the test presented in the subject" << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "Creating animal pointers: " << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::getline(std::cin, stopper);

	std::cout << "Deleting animal pointers: " << std::endl;

	delete j;
	delete i;
	std::getline(std::cin, stopper);

	std::cout << "This shouldn't create leaks. Make sure to check \"make leaks\"" << std::endl;
	std::getline(std::cin, stopper);

	return ;
}


void makeSoundLoop(Animal *array[])
{
	std::string stopper;

	std::cout << "All the animals will now makeSound(). Showcasing" << std::endl
			  << "the division requested by the subject" << std::endl;
	std::getline(std::cin, stopper);

	for (int i = 0; i < n_ani; ++i)
		array[i]->makeSound();

	return ;
}

int main(void)
{
	std::string stopper;
	Animal	*array[n_ani];

	std::cout << "An animal array of " << n_ani
			   << " Animals, has been created." << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "Assigning animal types: " << (n_ani / 2)
			  << " Dogs & " <<  (n_ani - (n_ani / 2))
			  << " Cats." << std::endl;
	std::getline(std::cin, stopper);

	for (int i = 0; i < n_ani; ++i)
	{
		if (i < (n_ani / 2))
			array[i] = new Dog();
		else
		 	array[i] = new Cat();
	}
	std::getline(std::cin, stopper);

	makeSoundLoop(array);
	std::getline(std::cin, stopper);

	std::cout << "The array of animals will now be deleted. You should see" << std::endl
			  << "the proper destructor of each one being called, along" << std::endl
			  << "with their brain. And of course, no leaks." << std::endl << std::endl;

	std::getline(std::cin, stopper);
	for (int i = 0; i < n_ani; ++i)
		delete array[i];

	std::getline(std::cin, stopper);
	subjectTests();
	std::getline(std::cin, stopper);
	raccTests();

	return (0);
}
