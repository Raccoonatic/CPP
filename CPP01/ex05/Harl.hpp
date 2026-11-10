/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Harl.hpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/16 10:27:23 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/26 15:04:50 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define LM	"\033[1;38;2;0;255;0m" // Lime
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define BL	"\033[1;38;2;255;0;0m" // Blood Red
# define OG	"\033[38;2;255;153;51m" // Orange
# define PK	"\033[1;38;2;255;0;251m" // Pink
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define HT	"\033[1;38;2;255;51;119m" // Hot Pink
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

class Harl {

	public:
		Harl();
		~Harl();

		void	complain(std::string level);

	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};
#endif
