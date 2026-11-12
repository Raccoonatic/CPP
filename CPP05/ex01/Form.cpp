/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Form.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/12 12:21:09 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/12 20:36:32 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <ostream>
#include <string>
#include <iostream>

static int checkGrade(int grade);

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

Form::Form (void)
	 : name("Student Survey"),
	   grade_to_sign(42),
	   grade_to_exe(42),
	   is_signed(false)
{
	if (DEBUG)
	{
		std::cout << BB << "DEFAULT " << std::endl
				  << MT << "Wow a "
				  << BW	<< this->name
				  << MT << " again? Really? " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->grade_to_sign << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->grade_to_exe << RT << std::endl;
	}
	return ;
}

Form::Form (std::string title, int sign_lvl, int exe_lvl)
	 : name(title),
	   grade_to_sign(checkGrade(sign_lvl)),
	   grade_to_exe(checkGrade(exe_lvl)),
	   is_signed(false)
{
	if (DEBUG)
	{
		std::cout << BB << "MAIN " << std::endl
				  << MT << "Wow a "
				  << BW	<< this->name
				  << MT << " again? Really? " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->grade_to_sign << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->grade_to_exe << RT << std::endl << std::endl;
	}
	return ;
}

Form::Form (const Form &original)
	 : name(original.name),
	   grade_to_sign(original.grade_to_sign),
	   grade_to_exe(original.grade_to_exe),
	   is_signed(original.is_signed)
{
	if (DEBUG)
	{
		std::cout << BB << "COPY " << std::endl
				  << MT << "Wow a "
				  << BW	<< this->name
				  << MT << " again? Really? " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->grade_to_sign << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->grade_to_exe << RT << std::endl << std::endl;
	}
	return ;
}

Form::~Form(void)
{
	if (DEBUG)
	{
		std::cout << BB << "DESTRUCTOR " << std::endl
				  << MT << "I'mma burn this "
				  << BW	<< this->name
				  << MT << " form. I like fire." << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->grade_to_sign << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->grade_to_exe << RT << std::endl << std::endl;
	}
	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

const std::string &Form::getName (void) const
{
	return (this->name);
}

int Form::getGrade_to_sign(void) const
{
	return (this->grade_to_sign);
}

int Form::getGrade_to_exe(void) const
{
	return (this->grade_to_exe);
}

bool Form::getIs_signed(void) const
{
	return (this->is_signed);
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

Form &Form::operator=(const Form &rhs)
{
	if (DEBUG)
		std::cout << NR << "Assignment Operator Overload " << RT << std::endl;

	if (this == &rhs)
		return (*this);

	this->is_signed = rhs.is_signed;

	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const Form &input)
{
	stream << BB << ">> " << MT << input.getName() << " Form Data " << BB << "<<" << std::endl
		   << BW << "Grade to sign" << PR << ": " << PK << input.getGrade_to_sign() << BW << "." << std::endl
		   << BW << "Grade to execute" << PR << ": " << PK << input.getGrade_to_exe() << BW << "." << std::endl
		   << BW << "Signed State" << PR << ": ";

	if (input.getIs_signed())
		stream << PK << "TRUE" << BW << "." << RT <<std::endl;
	else
		stream << PK << "FALSE" << BW << "." << RT <<std::endl;

	return (stream);
}

		     //******************************************************//
	        //                     Exceptions                       //
	       //******************************************************//

const char *Form::GradeTooHighException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" too much sorry"BW". "OG"Max grade is "GD"1"BW"."RT;

	return (ret);
}

const char *Form::GradeTooLowException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" too small sorry"BW". "OG"Min grade is "GD"150"BW"."RT;

	return (ret);
}

const char *Form::FormAlreadySigned::what() const throw()
{
	char *ret;

	ret = (char *)OG"This was already signed"BW"."RT;

	return (ret);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void Form::beSigned(const Bureaucrat &signer)
{
	if (this->is_signed)
		throw (Form::FormAlreadySigned());
	else if (signer.getGrade() <= this->grade_to_sign)
	{
		if (DEBUG)
			std::cout << BW << signer.getName() << LM << " Just signed the form " << HT << this->name << BW << "." << RT << std::endl << std::endl;
		this->is_signed = true;
	}
	else
	{
		if (DEBUG)
			std::cout << BW << signer.getName() << BL << " Couldn't sign the form " << HT << this->name << BW << "." << RT << std::endl << std::endl;
	 	throw (Form::GradeTooLowException());
	}
	return ;
}

		     //******************************************************//
	        //                  Helper Functions                    //
	       //******************************************************//

static int checkGrade(int grade)
{
	if (grade > 150 )
		throw (Form::GradeTooLowException());
	else if (grade < 1)
		throw (Form::GradeTooHighException());

	return (grade);
}
