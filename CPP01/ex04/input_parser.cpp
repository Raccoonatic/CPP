/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   input_parser.cpp                               ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/14 16:30:52 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/17 13:19:11 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "racc_sed.hpp"

#include <iostream>
#include <string>

static int checkTarget(const std::string &str_trgt)
{
	if (str_trgt.empty())
	{
		std::cerr <<BL<< "Error: "
				  <<OG<< "str_target"
				  <<NR<< " cannot be empty"
				  <<RT<< std::endl;
		return (1);
	}
	return (0);
}

static int openInStream(const std::string &filename, std::ifstream &in)
{
	in.open(filename.c_str());
	if (!in || !in.is_open())
	{
		std::cerr <<BL<< "Error: "
				  <<NR<< "Could not open file "
				  <<OG<< filename
				  <<RT<< std::endl;
		return (1);
	}
	return (0);
}

static int openOutStream(const std::string &filename, std::ofstream &out)
{
	out.open(filename.c_str());
	if (!out || !out.is_open())
	{
		std::cerr <<BL<< "Error: "
				  <<NR<< "Could not open or create file "
				  <<OG<< filename
				  <<RT<< std::endl;
		return (1);
	}
	return (0);
}

int inputParse(const int argc, char **argv, std::ofstream &out, std::ifstream	&in)
{
	std::string		outFile;

	if (argc != 4)
	{
		std::cerr <<MT<< "Usage: "
				  <<BB<< argv[0]
				  <<GD<< " <"<<HT<<"filename"
				  <<GD<<"> <"<<OG<<"str_target"
				  <<GD<<"> <"<<OG<<"str_replacement"<<GD<<">"
				  <<RT<< std::endl;
		return (1);
	}

	if (checkTarget(argv[2]) != 0)
		return (1);

	if (openInStream(argv[1], in) != 0)
		return (1);

	outFile = std::string(argv[1]) + std::string(".replace");

	if (openOutStream(outFile, out) != 0)
		return (in.close(), 1);

	return (0);
}
