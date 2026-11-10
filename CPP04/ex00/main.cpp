/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 16:39:52 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 15:42:25 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

void raccTests(void)
{
	std::string stopper;

	std::cout << std::endl << "  Proceeding to test every aspect of the classes" << std::endl << std::endl
			  << "First, an object of each class will be created:" << std::endl;
	std::getline(std::cin, stopper);

	Animal		ani;
	Dog			dog;
	Cat			cat;
	WrongAnimal w_ani;
	WrongCat	w_cat;

	std::getline(std::cin, stopper);

	std::cout << std::endl << "Now, the getType() method will be called for each object:" << std::endl;

	std::cout << ani.getType() << std::endl;
	std::cout << dog.getType() << std::endl;
	std::cout << cat.getType() << std::endl;
	std::cout << w_ani.getType() << std::endl;
	std::cout << w_cat.getType() << std::endl;
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Now, the makeSound() method will be called for each object:" << std::endl;

	ani.makeSound();
		std::cout << std::endl;
	dog.makeSound();
		std::cout << std::endl;
	cat.makeSound();
		std::cout << std::endl;
	w_ani.makeSound();
		std::cout << std::endl;
	w_cat.makeSound();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Now, a new object will be created for each class. Using their Copy Constructor:" << std::endl;

	Animal		ani2(ani);
	Dog			dog2(dog);
	Cat			cat2(cat);
	WrongAnimal w_ani2(w_ani);
	WrongCat	w_cat2(w_cat);
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Now, the getType() method will be called for each new object, confirming that they been copied:" << std::endl;

	std::cout << ani2.getType() << std::endl;
	std::cout << dog2.getType() << std::endl;
	std::cout << cat2.getType() << std::endl;
	std::cout << w_ani2.getType() << std::endl;
	std::cout << w_cat2.getType() << std::endl;
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Now. The assignment operators will be tested, equating two objects of different types." << std::endl
						   << "Since they share their parent class, the assignment operator should work. Even if the" << std::endl
						   << "makeSound() function ends up showing a mistmatched output." << std::endl << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "\tAssigning dog2 to ani:" << std::endl;
	ani = dog2;
	std::cout << "ani's type: " << ani.getType() << std::endl;
	std::cout << "ani's sound: ";
	ani.makeSound();
	std::cout << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "\tAssigning cat2 to ani:" << std::endl;
	ani = cat2;
	std::cout << "ani's type: " << ani.getType() << std::endl;
	std::cout << "ani's sound: ";
	ani.makeSound();
	std::cout << std::endl;
	std::getline(std::cin, stopper);

	std::cout << "\tAssigning w_cat2 to w_ani:" << std::endl;
	w_ani = w_cat2;
	std::cout << "w_ani's type: " << w_ani.getType() << std::endl
			  << "w_ani's sound: ";
	w_ani.makeSound();
	std::cout << std::endl;
	std::getline(std::cin, stopper);

	std::cout << std::endl << "A child class can be assigned to an instance of its parent class." << std::endl
			  << "But a parent class cannot be assigned to an instance of its child class." << std::endl
			  << "And you shouldn't be able to assign two different child classes to each other, within the OCF." << std::endl
			  << "Now, since these objects are are stack-allocated, their destructors will now be called " << std::endl
			  << "in reverse order of creation, as the function's scope ends." << std::endl;
	std::getline(std::cin, stopper);

	return ;
}


void subjectTestsA(void)
{
	std::string stopper;

	std::cout << std::endl << "  Running the Subject's Animal Tests:" << std::endl << std::endl
			  << "The First object is of the Animal base class." << std::endl;
	const Animal* meta = new Animal();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "The second object is of the Dog child class." << std::endl;
	const Animal* j = new Dog();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "The third object is of the Cat child class." << std::endl;
	const Animal* i = new Cat();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Their getType() output should match their actual types." << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::getline(std::cin, stopper);

	std::cout << std::endl << "And their makeSound() will correspond to their actual types." << std::endl;
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "This is because they are dynamically bound, thanks to the virtual keyword." << std::endl
			  << "Now the objects will be deleted, and their destructors won't appear in the default order." << std::endl
			  << "This is because the objects were dynamically allocated, so the order is hard-coded." << std::endl
			  << "That said, because the destructor is virtual, the child class destructors will be called" << std::endl
			  << "properly." << std::endl;
	std::getline(std::cin, stopper);

	delete meta;
	delete j;
	delete i;

	return ;
}

void subjectTestsB(void)
{
	std::string stopper;

	std::cout << std::endl << "  Running the Subject's WrongAnimal Tests:" << std::endl << std::endl
			  << "The First object is of the WrongAnimal base class." << std::endl;
	const WrongAnimal* mety = new WrongAnimal();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "The second object is of the WrongCat child class." << std::endl;
	const WrongAnimal* z = new WrongCat();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Their getType() output should match their actual types." << std::endl;
	std::cout << mety->getType() << " " << std::endl;
	std::cout << z->getType() << " " << std::endl;
	std::getline(std::cin, stopper);

	std::cout << std::endl << "Yet their makeSound() will be the same." << std::endl;
	mety->makeSound();
	z->makeSound();
	std::getline(std::cin, stopper);

	std::cout << std::endl << "This demonstrates the difference between static and dynamic binding." << std::endl
			  << "Now the objects will be deleted, and their destructors won't appear in the default order." << std::endl
			  << "This is because the objects were dynamically allocated, so the order is hard-coded." << std::endl << std::endl
			  << "That said, because the destructor isn't virtual, the child class destructor won't be called," << std::endl
			  << "which is a problem if the child class had dynamically allocated members." << std::endl;
	std::getline(std::cin, stopper);

	delete mety;
	delete z;

	return ;
}

int main(void)
{
	std::string stopper;

	subjectTestsA();
	std::getline(std::cin, stopper);
	subjectTestsB();
	std::getline(std::cin, stopper);
	raccTests();

	return 0;
}
