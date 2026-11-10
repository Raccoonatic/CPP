/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Bureaucrat.hpp                                 ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/04 17:16:26 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 17:18:52 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string nick, int start_grade);
		Bureaucrat(const Bureaucrat &original);
		~Bureaucrat();

		void incrementGrade(void);
		void decrementGrade(void);

		const std::string	&getName(void) const;
		int					getGrade(void) const;

		Bureaucrat &operator=(const Bureaucrat &rhs);

		class GradeTooHighException :  public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string	name;
		int					grade;
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &input);

#  ifndef DEBUG
#   define DEBUG 1
#  endif

// Color Macros
#  define RT "\033[0m"						// Reset
#  define BW "\033[1;37m"					// Bold White
#  define LM "\033[1;38;2;0;255;0m"			// Lime
#  define BL "\033[1;38;2;255;0;0m"			// Blood Red
#  define BB "\033[1;38;2;0;255;247m"		// Baby Blue
#  define PK "\033[1;38;2;255;0;251m"		// Pink
#  define PR "\033[1;38;2;174;5;252m"		// Purple
#  define OG "\033[1;38;2;255;153;51m"		// Orange
#  define GD "\033[1;38;2;235;232;52m"		// Gold Yellow
#  define HT "\033[1;38;2;255;51;119m"		// Hot Pink
#  define MT "\033[1;38;2;55;250;133m"		// Mint
#  define NR "\033[3m\033[38;2;255;153;51m"	// Neon Italic Orange

#endif
