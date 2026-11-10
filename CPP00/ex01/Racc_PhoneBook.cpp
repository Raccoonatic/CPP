/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Racc_PhoneBook.cpp                             ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/08 16:47:28 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/24 21:57:56 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Color.hpp"
#include <iostream>

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (true)
	{
		std::cout << MT <<"🦝 » "
				  << BW << "Enter a command "<< GD <<"("
				  << PR << "ADD"<< BW << ", "
				  << HT << "SEARCH"<< BW << ", "
				  << BL << "EXIT" << GD << ")"<< BW << ": " << BB;
		if (!std::getline(std::cin, input) || std::cin.eof())
			break ;
		if (input == "ADD")
		{
			if (book.addContact())
				break ;
		}
		else if (input == "SEARCH")
		{
			if (book.displayPhoneBook())
				break ;
		}
		else if (input == "EXIT")
			break ;
		else
		{
			std::cout << std::endl << NR
					  << "Invalid command. Please try again." << RT << std::endl;
		}
		std::cout << RT << std::endl;
	}
	return (0);
}
