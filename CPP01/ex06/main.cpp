/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/16 22:11:13 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/17 13:19:11 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	Harl		engineer;

	if (argc != 2)
	{
		std::cerr <<NR<< "Do you even prompt bro?"<<std::endl
				  <<MT<< "Usage: "
				  <<BB<< argv[0]
				  <<GD<< " <"<<HT<<"COMMENT LEVEL"
				  <<GD<<">"<<RT<< std::endl;
		return (1);
	}

	engineer.complain(argv[1]);

	return (0);
}
