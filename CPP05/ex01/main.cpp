/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/04 17:21:59 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/12 20:36:13 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <ostream>
#include <string>

static void intro(void)
{
	std::string	stopper;

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

static void testStop(const std::string test_case)
{
	std::string	stopper;

	std::getline(std::cin, stopper);
	std::cout << BW << "\t>> " NR << test_case << BW << " <<" << RT << std::endl;
	std::getline(std::cin, stopper);

	return ;
}

int	main(void)
{
	std::string	stopper;
	int			paper;
	int			people;

	intro();
	paper = 0;
	people = 0;

	std::cout << BW << "\t>> " NR << "Testing Default constructor" << BW << " <<" << RT << std::endl;
	std::getline(std::cin, stopper);

	Form a;
	paper++;

// ---------------------------------------------------------------------------//

	testStop("Testing Main constructor");

	try
	{
		Form b("Medical Registry", 66, 94);
		paper++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

// ---------------------------------------------------------------------------//

	testStop("Testing Main constructor. High Sign exception");

	try
	{
		Form c("Magical Registry", 0, 94);
		paper++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

// ---------------------------------------------------------------------------//

	testStop("Testing Main constructor. High Execution exception");

	try
	{
		Form c("Magical Registry", 69, -3);
		paper++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

// ---------------------------------------------------------------------------//

	testStop("Testing Main constructor. Low Sign exception");

	try
	{
		Form c("Eldritch pact", 9999, 94);
		paper++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

// ---------------------------------------------------------------------------//

	testStop("Testing Main constructor. Low Execution exception");

	try
	{
		Form c("Eldritch pact", 69, 151);
		paper++;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

// ---------------------------------------------------------------------------//

	testStop("Testing Insertion Operator Overload");

	Form g("Pizza Receipt", 50, 50);
	paper++;
	Form h("Beer Receipt", 21, 100);
	paper++;

	std::cout << g << std::endl;
	std::cout << h << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing beSigned Function");

	Bureaucrat luis("Mapache", 49);
	people++;

	g.beSigned(luis);
	std::cout << g << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing beSigned Function Exception");

	Bureaucrat lomeli("Karla", 100);
	people++;

	try
	{
		h.beSigned(lomeli);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << h << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing signForm Function");

	Form d("CSAT1", 2, 100);
	Bureaucrat ditto("Helen", 1);
	paper++;
	people++;

	ditto.signForm(d);

	std::cout << d << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing signForm Function Exception");

	Form e("CSAT2", 1, 100);
	Bureaucrat banea_ditto("Casiopea", 6);
	paper++;
	people++;

	try
	{
		banea_ditto.signForm(e);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << e << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing Assignment Operator Overload");

	std::cout << h << std::endl;
	std::cout << g << std::endl;

	h = g;

	std::cout << LM << "Are their signed status now the same?" << HT << " -> "
			  << GD << (g.getIs_signed() == h.getIs_signed()) << RT << std::endl << std::endl;

	std::cout << h << std::endl;
	std::cout << g << std::endl;

// ---------------------------------------------------------------------------//

	testStop("Testing Copy constructor");

	std::cout << g << std::endl;

	Form z(g);
	paper++;

	std::cout << LM << "Are their names now the same?" << HT << " -> "
			  << GD << (g.getName() == z.getName()) << RT << std::endl;
	std::cout << LM << "Are their Grade_to_exe now the same?" << HT << " -> "
			  << GD << (g.getGrade_to_exe() == z.getGrade_to_exe()) << RT << std::endl;
	std::cout << LM << "Are their Grade_to_sign now the same?" << HT << " -> "
			  << GD << (g.getGrade_to_sign() == z.getGrade_to_sign()) << RT << std::endl;
	std::cout << LM << "Are their signed status now the same?" << HT << " -> "
			  << GD << (g.getIs_signed() == z.getIs_signed()) << RT << std::endl;

// ---------------------------------------------------------------------------//

	testStop("And what happens if you try to sign a form that was already signed?");

	Form w("Certificate of Completion", 50, 50);
	paper++;
	std::cout << w << std::endl;
	Bureaucrat x("Alan Smithee", 1);
	people++;
	x.signForm(w);
	std::cout << w << std::endl;
	Bureaucrat y("Jane Doe", 1);
	people++;
	y.signForm(w);
	std::cout << w << std::endl;

// ---------------------------------------------------------------------------//

	std::getline(std::cin, stopper);

	std::cout << BB << std::endl
					<< "These tests created "
			  << LM << paper
			  << BB << " Forms and "
			  << LM << people
			  << BB << " Bureaucrats.\nYou should see a total of "
			  << GD << (people + paper)
			  << BB << " Objects Destroyed "
			  << RT << std::endl;

	testStop("Exiting Program");

	return (0);
}
