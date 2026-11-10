/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   main.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/10 20:37:57 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/20 20:07:19 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define LM	"\033[1;38;2;0;255;0m" // Lime
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define MT	"\033[1;38;2;55;250;133m" // Mint

int main(void)
{
	std::string const str = "HI THIS IS BRAIN";
	std::string const *stringPTR = &str;
	std::string const &stringREF = str;

	std::cout << LM << "He printed the addresses:" << std::endl<< std::endl<<BW;

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl<< std::endl;

	std::cout << MT << "And then the values:" << std::endl<< std::endl<<BW;

	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl<< std::endl;

	std::cout << BB << "He was very cool." << std::endl<< std::endl<<RT;

	return (0);
}
