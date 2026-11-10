/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   io_utils.cpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/14 16:41:32 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/20 20:07:22 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "racc_sed.hpp"
#include <sstream>
#include <iostream>

int getFileData(std::string &content,std::ifstream &inStream)
{
	std::ostringstream	buffer;

	inStream.peek();

	if (inStream.fail() && !inStream.eof())
	{
		std::cerr <<BL<< "Error: "
				  <<NR<< "Failed to read from the file"
				  <<RT<< std::endl;
		return (1);
	}

	buffer << inStream.rdbuf();
	content = buffer.str();

	return (0);
}

std::string	strTargetReplace(const std::string &str_trgt, const std::string &str_rplc, const std::string &content, size_t pos)
{
	std::string		replaced;
	size_t			found;

	found = content.find(str_trgt, pos);

	if (found != std::string::npos)
	{
		replaced = content.substr(pos, found - pos);
		replaced += str_rplc;
		replaced += strTargetReplace(str_trgt, str_rplc, content, found + str_trgt.length());
	}
	else
		replaced = content.substr(pos);

	return (replaced);
}
