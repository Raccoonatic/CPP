/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Bureaucrat.cpp                                 ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/04 17:22:04 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/10 23:11:39 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Bureaucrat::Bureaucrat (void) : name("Rogelio"), grade(42)
{
	if (DEBUG)
	{
		std::cout << BB << "DEFAULT " << std::endl
				  << MT << "Its a sad day, "
				  << BW	<< this->name
				  << MT << " was born" << RT << std::endl;
		std::cout << PR << "Grade: " << GD << this->grade << RT << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat (std::string	nick, int start_grade) : name(nick)
{
	if (start_grade > 150 )
	{
		throw (Bureaucrat::GradeTooLowException());
		return ;
	}
	else if (start_grade < 1)
	{
		throw (Bureaucrat::GradeTooHighException());
		return ;
	}
	else
		this->grade = start_grade;

	if (DEBUG)
	{
		std::cout << BB << "MAIN " << std::endl
				  << MT << "Its a sad day, "
				  << BW	<< this->name
				  << MT << " was born" << RT << std::endl;
		std::cout << PR << "Grade: " << GD << this->grade << RT << std::endl;
	}

	return ;
}

Bureaucrat::Bureaucrat (const Bureaucrat &original) : name(original.name)
{
	this->grade = original.grade;

	if (DEBUG)
	{
		std::cout << BB << "COPY " << std::endl
				  << MT << "Its a sad day, "
				  << BW	<< this->name
				  << MT << " was born" << RT << std::endl;
		std::cout << PR << "Grade: " << GD << this->grade << RT << std::endl;
	}
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	if (DEBUG)
	{
		std::cout << BB << "DESTRUCTOR " << std::endl
				  << MT << "Its a great day, "
				  << BW	<< this->name
				  << MT << " died" << RT << std::endl;
		std::cout << PR << "Grade: " << GD << this->grade << RT << std::endl;
	}
	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

const std::string &Bureaucrat::getName (void) const
{
	return (this->name);
}

int Bureaucrat::getGrade (void) const
{
	return (this->grade);
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (DEBUG)
		std::cout << NR << "Assignment Operator Overload " << RT << std::endl;

	if (this == &rhs)
		return (*this);

	this->grade = rhs.grade;

	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &input)
{
	stream << input.getName() << ", bureaucrat grade " << input.getGrade() << ".";

	return (stream);
}

		     //******************************************************//
	        //                     Exceptions                       //
	       //******************************************************//

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" too much sorry"BW". "OG"Max grade is "GD"1"BW"."RT;

	return (ret);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" too small sorry"BW". "OG"Min grade is "GD"150"BW"."RT;

	return (ret);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void Bureaucrat::signForm(Form &to_fill)
{
	try
	{
		to_fill.beSigned(this);

		std::cout << this->name
				  << " signed "
				  << to_fill.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->name
				  << " couldn’t sign "
				  << to_fill.getName()
				  << " because "
				  << e.what() << std::endl;
	}

	return ;
}

void Bureaucrat::incrementGrade (void)
{
	if (this->grade > 1)
	{
		if (DEBUG)
			std::cout << MT << this->name << BB << " Has been promoted!";
		this->grade--;
		if (DEBUG)
			std::cout << " New grade: " << PK << this->grade << RT << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooHighException());

	return ;
}
void Bureaucrat::decrementGrade (void)
{
	if (this->grade < 150)
	{
		if (DEBUG)
			std::cout << MT << this->name << BB << " Has been demoted...";
		this->grade++;
		if (DEBUG)
			std::cout << " New grade: " << PK << this->grade << RT << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooLowException());

	return ;
}
