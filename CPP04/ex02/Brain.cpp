/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Brain.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/24 19:12:04 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/04 17:41:55 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

# define RT	"\033[0m" // Reset
# define BW	"\033[1;37m" // Bold White
# define BB	"\033[38;2;0;255;247m" // Baby Blue
# define PK	"\033[1;38;2;255;0;251m" // Pink
# define PR	"\033[1;38;2;174;5;252m" // Purple
# define GD	"\033[1;38;2;235;232;52m" // Gold Yellow
# define MT	"\033[1;38;2;55;250;133m" // Mint
# define NR	"\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Brain::Brain()
{
	std::cout << PK "Brain " << PR << "Class" RT
			  << MT " Default Constructor " RT << NR "called"
			  << RT << std::endl;

	for (unsigned int i = 0; i < n_ideas; ++i)
		this->ideas[i] = "The Roman Empire";

	return ;
}

Brain::Brain(const Brain &original)
{
	std::cout << PK "Brain " << PR << "Class" RT
			  << MT " Copy Constructor " RT << NR "called"
			  << RT << std::endl;

	for (unsigned int i = 0; i < n_ideas; ++i)
		this->ideas[i] = original.ideas[i];

	return ;
}

Brain::~Brain()
{
	std::cout << PK "Brain " << PR << "Class" RT
			  << MT " Destructor " RT << NR "called"
			  << RT << std::endl;
	return ;
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Brain &Brain::operator=(const Brain &rhs)
{
	if (this == &rhs)
		return (*this);

	for (unsigned int i = 0; i < n_ideas; ++i)
		this->ideas[i] = rhs.ideas[i];

	return (*this);
}
