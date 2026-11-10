/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   megaphone.cpp                                  ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/07/23 16:23:27 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/09 12:06:19 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int	main(int arc, char *wordy[])
{
	std::string const 	dflt = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::string 		arg;

	if (arc < 2)
		std::cout << dflt << std::endl;
	else
	{
		for (int i = 1; i < arc; i++)
		{
			arg = wordy[i];
			for (std::string::iterator j = arg.begin(); j != arg.end(); j++)
				*j = std::toupper(*j);
			std::cout << arg;
		}
		std::cout << std::endl;
	}
	return (0);
}
