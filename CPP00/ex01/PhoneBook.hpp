/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   PhoneBook.hpp                                  ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/08 10:47:56 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/24 21:57:55 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		int		addContact(void);
		int 	displayPhoneBook(void) const;

	private:
		int 		_nextIndex;
		int			_contactCount;
		Contact		_contacts[8];

		int 		_displayContact(void) const;
		int 		_getInput(std::string &input) const;
		std::string	_displayField(std::string record) const;
		int			_fillContactAttribute(int (Contact::*setter)(std::string));
};
#endif
