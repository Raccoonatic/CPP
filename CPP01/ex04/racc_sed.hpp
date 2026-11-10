/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   racc_sed.hpp                                   ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/09 13:12:15 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/26 14:58:33 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef RACC_SED_HPP
# define RACC_SED_HPP

# define RT	"\033[0m" // Reset
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define BL	"\033[1;38;2;255;0;0m" // Blood Red
# define OG	"\033[38;2;255;153;51m" // Orange
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

# include <fstream>
# include <string>

// input_parser.cpp
 int			inputParse(const int argc, char **argv, std::ofstream &out, std::ifstream	&in);

// io_utils.cpp
 int			getFileData(std::string &content, std::ifstream &inStream);
 std::string	strTargetReplace(const std::string &str_trgt, const std::string &str_rplc, const std::string &content, size_t pos);

#endif
