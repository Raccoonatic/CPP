/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Contact.cpp                                    ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/08 00:54:07 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/04 17:41:58 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Color.hpp"
#include <iostream>
#include <cctype>

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret("")
{}

Contact::~Contact()
{}

int Contact::setFirstName(std::string firstName)
{
	for (std::string::iterator i = firstName.begin(); i != firstName.end(); ++i)
	{
		if (!std::isalpha(*i))
		{
			std::cout << NR << "Names "
					  << BW << "only"
					  << NR << " have "
					  << BW << "letters"
					  << NR << " on them! You silly goose..." << RT << std::endl;
			return (1);
		}
	}
	this->_firstName = firstName;
	return (0);
}

int Contact::setLastName(std::string lastName)
{
	for (std::string::iterator i = lastName.begin(); i != lastName.end(); ++i)
	{
		if (!std::isalpha(*i))
		{
			std::cout << NR << "You are not in Venezuela anymore Dorothy. "
					  << "Last names "
					  << BW << "only "
					  << NR << "have "
					  << BW << "alphabetic characters"
					  << NR << "." << RT << std::endl;
			return (1);
		}
	}
	this->_lastName = lastName;
	return (0);
}

int Contact::setNickname(std::string nickname)
{
	for (std::string::iterator i = nickname.begin(); i != nickname.end(); ++i)
	{
		if (!std::isalpha(*i) && *i != ' ' && !std::isdigit(*i))
		{
			std::cout << NR << "Cool Nickname! You can do better though. "
					  << "Let's try one "
					  << BW << "without crazy characters." << RT << std::endl;
			return (1);
		}
	}
	this->_nickname = nickname;
	return (0);
}

int Contact::setPhoneNumber(std::string phoneNumber)
{
	for (std::string::iterator i = phoneNumber.begin(); i != phoneNumber.end(); ++i)
	{
		if (!std::isdigit(*i))
		{
			std::cout << NR << "Phone numbers contain "
					  << BW << "only digits"
					  << NR << ". Do better" << RT << std::endl;
			return (1);
		}
	}
	this->_phoneNumber = phoneNumber;
	return (0);
}

int Contact::setDarkestSecret(std::string darkestSecret)
{
	for (std::string::iterator i = darkestSecret.begin(); i != darkestSecret.end(); ++i)
	{
		if (std::isupper(*i) || *i == '!')
		{
			std::cout << NR << "Shh! Someone might hear you! No need to shout. "
					  << BW << "No exclamation marks or uppercase letters allowed"
					  << NR << "." << RT << std::endl;
			return (1);
		}
	}
	this->_darkestSecret = darkestSecret;
	return (0);
}

std::string Contact::getFirstName() const
{
	return (this->_firstName);
}

std::string Contact::getLastName() const
{
	return (this->_lastName);
}

std::string Contact::getNickname() const
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->_darkestSecret);
}
