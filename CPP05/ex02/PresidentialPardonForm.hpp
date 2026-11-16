/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   PresidentialPardonForm.hpp                     ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/16 15:17:53 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/16 21:49:46 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string &trg);
		PresidentialPardonForm(const PresidentialPardonForm &original);
		virtual ~PresidentialPardonForm();

		virtual void		execute(Bureaucrat const & executor) const;
		const std::string	&getTarget() const;

		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

	private:
		const std::string	target;
};

#  ifndef DEBUG
#   define DEBUG 1
#  endif

// Color Macros
#  ifndef RT
#  	define RT "\033[0m"						// Reset
#  endif
#  ifndef BW
#  	define BW "\033[1;37m"					// Bold White
#  endif
#  ifndef LM
#  	define LM "\033[1;38;2;0;255;0m"			// Lime
#  endif
#  ifndef BL
#  	define BL "\033[1;38;2;255;0;0m"			// Blood Red
#  endif
#  ifndef BB
#  	define BB "\033[1;38;2;0;255;247m"		// Baby Blue
#  endif
#  ifndef PK
#  	define PK "\033[1;38;2;255;0;251m"		// Pink
#  endif
#  ifndef PR
#  	define PR "\033[1;38;2;174;5;252m"		// Purple
#  endif
#  ifndef OG
#  	define OG "\033[1;38;2;255;153;51m"		// Orange
#  endif
#  ifndef GD
#  	define GD "\033[1;38;2;235;232;52m"		// Gold Yellow
#  endif
#  ifndef HT
#  	define HT "\033[1;38;2;255;51;119m"		// Hot Pink
#  endif
#  ifndef MT
#  	define MT "\033[1;38;2;55;250;133m"		// Mint
#  endif
#  ifndef NR
#  	define NR "\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange
#  endif

#endif
