/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/14 14:07:45 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/26 14:59:18 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "racc_sed.hpp"
# include <fstream>
# include <string>

int	main(int argc, char **argv)
{
	std::string		content;
	std::string		replaced;
	std::ifstream	inStream;
	std::ofstream	outStream;

	if (inputParse(argc, argv, outStream, inStream) != 0)
		return (1);

	if (getFileData(content, inStream) != 0)
	{
		inStream.close();
		outStream.close();
		return (1);
	}

	replaced = strTargetReplace(std::string(argv[2]), std::string(argv[3]), content, 0);

	outStream << replaced;
	outStream.close();

	return (0);
}
