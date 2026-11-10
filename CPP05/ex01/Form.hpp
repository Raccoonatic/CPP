/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Form.hpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/10 18:32:11 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 23:11:40 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(const Form &original);
		~Form();

		void beSigned(const Bureaucrat &signer);

		const std::string	&getName(void) const;
		const int			&getGrade_to_sign(void) const;
		const int			&getGrade_to_exe(void) const;
		bool				getIs_signed(void) const;

		Form &operator=(const Form &rhs);

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
		const int			grade_to_sign;
		const int			grade_to_exe;
		bool				is_signed;
};

std::ostream &operator<<(std::ostream &stream, const Form &input);

#endif
