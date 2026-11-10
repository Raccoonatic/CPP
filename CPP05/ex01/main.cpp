/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/04 17:21:59 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 17:27:56 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

static void intro(void)
{
	std::string stopper;

	std::cout << BB << "/* ***********************************************/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"  ▒▓              ▓▒   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<" Welcome back to the  "<<MT<<" ▒▒ ▓▓▓        ▓▓▓ ▒▒  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"Mapache testing hour! "<<MT<<" ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"  █░  ░░░ ░░ ░░░  ░█   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<GD<<"Hit enter after every "<<MT<<"  ███████░░░░███████   "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<GD<<"dialogue to  continue "<<MT<<" ░▒▒██ ▓  ██  ▓ ██▒▒░  "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<GD<<"       testing.       "<<MT<<"     ▒ ░██  ██░ ▒      "<<BB<<"*/" << std::endl
			  << BB << "/*  "<<OG<<"                      "<<MT<<"        ██████         "<<BB<<"*/" << std::endl
			  << BB << "/* ***********************************************/" << std::endl
			  << RT << std::endl;

	std::getline(std::cin, stopper);

	return ;
}

int	main(void)
{
	std::string	stopper;
	int			office;

	intro();
	office = 0;

	std::cout << NR << "Testing Default constructor" << RT << std::endl;
	std::getline(std::cin, stopper);

	Bureaucrat a;
	office++;

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Main constructor" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat b("Delcy", 66);
		office++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Main constructor. High exception" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat c("Romina", 0);
		office++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Main constructor. Low exception" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat d("Julio", 999);
		office++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Copy constructor. Copying Default" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat acopy(a);
		office++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Assignment Operator Overload" << RT << std::endl;
	std::getline(std::cin, stopper);

	Bureaucrat g("Manuel", 8);
	office++;
	Bureaucrat h("Enrique", 69);
	office++;

	std::cout << LM << "Assigning " << OG << g.getName()
			  << LM	<< " to " << OG << h.getName() << RT << std::endl;

	g = h;

	std::cout << LM << "Are their grades now the same?" << HT << " -> "
			  << GD << (g.getGrade() == h.getGrade()) << RT << std::endl;

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Insertion Operator Overload" << RT << std::endl;
	std::getline(std::cin, stopper);

	std::cout << a << std::endl;
	std::cout << g << std::endl;
	std::cout << h << std::endl;

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Grade Increment" << RT << std::endl;
	std::getline(std::cin, stopper);

	Bureaucrat i("Thelonious", 5);
	office++;

	i.incrementGrade();
	i.incrementGrade();
	i.incrementGrade();

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Grade Decrement" << RT << std::endl;
	std::getline(std::cin, stopper);

	i.decrementGrade();
	i.decrementGrade();
	i.decrementGrade();

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Grade Increment Exeption" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat j("Ravi", 3);
		office++;

		j.incrementGrade();
		j.incrementGrade();
		j.incrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);
	std::cout << NR << "Testing Grade Decrement Exeption" << RT << std::endl;
	std::getline(std::cin, stopper);

	try
	{
		Bureaucrat j("Lourdes",148);
		office++;

		j.decrementGrade();
		j.decrementGrade();
		j.decrementGrade();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::getline(std::cin, stopper);

	std::cout << BB << std::endl
					<< "These tests created "
			  << LM << office
			  << BB << " Bureaucrats. You should see that many"
			  << HT << " Destroyed "
			  << RT << std::endl;

	std::getline(std::cin, stopper);
	std::cout << NR << "Exiting Program" << RT << std::endl;
	std::getline(std::cin, stopper);

	return (0);
}
