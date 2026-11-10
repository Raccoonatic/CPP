/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   PhoneBook.cpp                                  ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/08 10:47:35 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/24 21:57:55 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Color.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : _nextIndex(0), _contactCount(0)
{}

PhoneBook::~PhoneBook()
{}

int 	PhoneBook::_getInput(std::string &input) const
{
	while (true)
	{
		if (!std::getline(std::cin, input) && std::cin.eof())
			return (1);
		if (input.empty())
		{
			std::cout << NR << "Input cannot be empty. Please try again." << std::endl;
			std::cout << MT <<"🦝 » "<< BB;
		}
		else
		{
			std::cout << RT;
			return (0);
		}
	}
}

int	PhoneBook::_fillContactAttribute(int (Contact::*setter)(std::string))
{
	std::string input;

	while (true)
	{
		if (_getInput(input))
			return (1);
		if ((this->_contacts[this->_nextIndex].*setter)(input) == 0)
			break ;
		std::cout << MT <<"🦝 » "<< BB;
	}
	return (0);
}


int PhoneBook::addContact(void)
{
	std::cout << std::endl << MT <<"🦝 » "<< PR << "Enter first name: " << BB;
	if (_fillContactAttribute(&Contact::setFirstName))
		return (1);

	std::cout << MT <<"🦝 » "<< PR << "Enter last name: " << BB;
	if (_fillContactAttribute(&Contact::setLastName))
		return (1);

	std::cout << MT <<"🦝 » "<< PR << "Enter nickname: " << BB;
	if (_fillContactAttribute(&Contact::setNickname))
		return (1);

	std::cout << MT <<"🦝 » "<< PR << "Enter phone number: " << BB;
	if (_fillContactAttribute(&Contact::setPhoneNumber))
		return (1);

	std::cout << MT <<"🦝 » "<< PR << "Enter darkest secret: " << BB;
	if (_fillContactAttribute(&Contact::setDarkestSecret))
		return (1);

	std::cout << std::endl << MT <<"🦝 » "
			  << LM << "Contact added successfully!"
			  << RT << std::endl;
	if (this->_contactCount < 8)
		this->_contactCount++;

	this->_nextIndex = (this->_nextIndex + 1) % 8;
	return (0);
}

int	PhoneBook::_displayContact(void) const
{
	std::string			input;
	int					i;

	std::cout << MT <<"🦝 » "<< PR << "Enter the index of the desired entry: " << OG;

	while (true)
	{
		std::stringstream	ss_idx;

		if (_getInput(input))
			return (1);

		ss_idx.str(input);

		if (ss_idx >> i && i >= 0 && i < this->_contactCount)
		{
			std::cout << HT << std::endl << "Contact's Details:"
					  << MT << std::endl << "First Name: "
					  << BW << this->_contacts[i].getFirstName()
					  << MT << std::endl << "Last Name: "
					  << BW << this->_contacts[i].getLastName()
					  << MT << std::endl << "Nickname: "
					  << BW << this->_contacts[i].getNickname()
					  << MT << std::endl << "Phone Number: "
					  << BW << this->_contacts[i].getPhoneNumber()
					  << MT << std::endl << "Darkest Secret: "
					  << BW << this->_contacts[i].getDarkestSecret() << std::endl;
			return (0);
		}
		else
		{
			std::cout << BL << "Invalid index. "
					  << NR << "Please enter a number between"
					  << PK << " 0 " << NR << "and "
					  << PK << this->_contactCount - 1 << NR << "." << std::endl;
			std::cout << MT <<"🦝 » "<< OG;
			continue ;
		}
		std::cout << std::endl;
	}
}

std::string	PhoneBook::_displayField(std::string record) const
{
	if (record.length() > 10)
		return (record.substr(0, 9) + ".");
	else
		return (record);
}

int PhoneBook::displayPhoneBook(void) const
{
	std::string display_record;

	std::cout << std::endl << HT
			  << std::setw(10) << "Index" << GD << "|" << HT
			  << std::setw(10) << "First Name" << GD << "|" << HT
			  << std::setw(10) << "Last Name" << GD << "|" << HT
			  << std::setw(10) << "Nickname" << std::endl;

	if (this->_contactCount == 0)
	{
		std::cout << NR << std::setw(40) << std::right
				  << "No contacts available to display." << RT << std::endl;
		return (0);
	}

	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << OG;
		std::cout << std::setw(10) << std::right << i;
		std::cout << GD << "|" << BW;
		display_record = this->_displayField(this->_contacts[i].getFirstName());
		std::cout << std::setw(10) << std::right << display_record;
		std::cout << GD << "|" << BW;
		display_record = this->_displayField(this->_contacts[i].getLastName());
		std::cout << std::setw(10) << std::right << display_record;
		std::cout << GD << "|" << BW;
		display_record = this->_displayField(this->_contacts[i].getNickname());
		std::cout << std::setw(10) << std::right << display_record;
		std::cout << RT << std::endl;
	}
	std::cout << std::endl;
	return (this->_displayContact());
}
