/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   AForm.cpp                                      ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/12 12:21:09 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/16 20:51:56 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <ostream>
#include <string>
#include <iostream>

static int checkGradeBoudaries(int grade);

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

AForm::AForm (void)
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

AForm::AForm (std::string title, int sign_lvl, int exe_lvl)
	 : name(title),
	   grade_to_sign(checkGradeBoudaries(sign_lvl)),
	   grade_to_exe(checkGradeBoudaries(exe_lvl)),
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

AForm::AForm (const AForm &original)
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

AForm::~AForm(void)
{
	if (DEBUG)
	{
		std::cout << BB << "DESTRUCTOR " << std::endl
				  << MT << "I'mma burn this "
				  << BW	<< this->name
				  << MT << " Form. I like fire." << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->grade_to_sign << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->grade_to_exe << RT << std::endl << std::endl;
	}

	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

const std::string &AForm::getName (void) const
{
	return (this->name);
}

int AForm::getGrade_to_sign(void) const
{
	return (this->grade_to_sign);
}

int AForm::getGrade_to_exe(void) const
{
	return (this->grade_to_exe);
}

bool AForm::getIs_signed(void) const
{
	return (this->is_signed);
}


		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

AForm &AForm::operator=(const AForm &rhs)
{
	if (DEBUG)
		std::cout << NR << "Assignment Operator Overload " << RT << std::endl;

	if (this == &rhs)
		return (*this);

	this->is_signed = rhs.is_signed;

	return (*this);
}

std::ostream &operator<<(std::ostream &stream, const AForm &input)
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

const char *AForm::GradeTooHighException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" too much sorry"BW". "OG"Max grade is "GD"1"BW"."RT;

	return (ret);
}

const char *AForm::GradeTooLowException::what() const throw()
{
	char *ret;

	ret = (char *)BL"Oops"BW","HT" the grade is too low sorry"BW"."RT;

	return (ret);
}

const char *AForm::FormAlreadySigned::what() const throw()
{
	char *ret;

	ret = (char *)OG"This form was "GD"already"OG" signed"BW"."RT;

	return (ret);
}

const char *AForm::FormNotSigned::what() const throw()
{
	char *ret;

	ret = (char *)OG"This form "GD"hasn't been"OG" signed"BW"."RT;

	return (ret);
}

		     //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void AForm::beSigned(const Bureaucrat &signer)
{
	if (this->is_signed)
		throw (AForm::FormAlreadySigned());
	canSign(signer);
	this->is_signed = true;
	if (DEBUG)
		std::cout << BW << signer.getName() << LM << " Just signed the form " << HT << this->name << BW << "." << RT << std::endl << std::endl;
	return ;
}

void AForm::canSign(const Bureaucrat &dummy) const
{
	try
	{
		if (dummy.getGrade() <= this->grade_to_sign)
			return ;
		throw (AForm::GradeTooLowException());
	}
	catch (const std::exception &e)
	{
		if (DEBUG)
			std::cerr << e.what()
					  << PR << " The minimum to sign "
					  << OG << this->name
					  << PR << " is "
					  << HT << this->grade_to_sign
					  << PR << " And " << dummy.getName() << "'s grade is "
					  << HT << dummy.getGrade() << std::endl;
		throw ;
	}
	return ;
}

void AForm::canExecute(const Bureaucrat &dummy) const
{
	try
	{
		if (!this->is_signed)
			throw (AForm::FormNotSigned());
		else if (dummy.getGrade() > this->grade_to_exe)
			throw (AForm::GradeTooLowException());
	}
	catch (const std::exception &e)
	{
		if (DEBUG)
			std::cerr << e.what()
					  << PR << " The minimum to execute "
					  << OG << this->name
					  << PR << " is "
					  << HT << this->grade_to_exe
					  << PR << " And " << dummy.getName() << "'s grade is "
					  << HT << dummy.getGrade() << std::endl;
		throw ;
	}
	return ;
}

		     //******************************************************//
	        //                  Helper Functions                    //
	       //******************************************************//

static int checkGradeBoudaries(int grade)
{
	if (grade > 150 )
		throw (AForm::GradeTooLowException());
	else if (grade < 1)
		throw (AForm::GradeTooHighException());

	return (grade);
}
