/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   PresidentialPardonForm.cpp                     ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/11/16 15:17:53 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/11/16 21:49:45 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include <ostream>
#include <string>
#include <iostream>

		     //******************************************************//
	        //             Constructors & Destructor                //
	       //******************************************************//

PresidentialPardonForm::PresidentialPardonForm (void)
					  : AForm("Presidential Pardon Form", 25, 5),
					  	target("Random Citizen")
{
	if (DEBUG)
	{
		std::cout << BB << "DEFAULT " << std::endl
				  << MT << "Oh Look! it's a "
				  << BW	<< this->getName()
				  << MT << " I wonder who'll run it. " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->getGrade_to_sign() << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->getGrade_to_exe() << RT << std::endl;
	}

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &trg)
					  : AForm("Presidential Pardon Form", 25, 5),
					  	target(trg)
{
	if (DEBUG)
	{
		std::cout << BB << "MAIN " << std::endl
				  << MT << "Oh Look! it's a "
				  << BW	<< this->getName()
				  << MT << " I wonder who'll run it. " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->getGrade_to_sign() << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->getGrade_to_exe() << RT << std::endl;
	}

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &original)
					  : AForm(original),
					    target(original.target)
{
	if (DEBUG)
	{
		std::cout << BB << "COPY " << std::endl
				  << MT << "Oh Look! it's a "
				  << BW	<< this->getName()
				  << MT << " I wonder who'll run it. " << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->getGrade_to_sign() << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->getGrade_to_exe() << RT << std::endl;
	}

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	if (DEBUG)
	{
		std::cout << BB << "DESTRUCTOR " << std::endl
				  << MT << "I'mma run this "
				  << BW	<< this->getName()
				  << MT << " Through the chipper. I still like fire though." << RT << std::endl;
		std::cout << PR << "Grade_to_sign: " << GD << this->getGrade_to_sign() << RT << std::endl
				  << PR << "Grade_to_exe: " << GD << this->getGrade_to_exe() << RT << std::endl;
	}

	return ;
}

		     //******************************************************//
	        //                  Getters & Setters                   //
	       //******************************************************//

const std::string &PresidentialPardonForm::getTarget (void) const
{
	return (this->target);
}

		     //******************************************************//
	        //                Operator Overloads                    //
	       //******************************************************//

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (DEBUG)
		std::cout << NR << "Assignment Operator Overload " << RT << std::endl;

	if (this == &rhs)
		return (*this);

	*this = rhs;

	return (*this);
}

		   //******************************************************//
	        //                  Member Functions                    //
	       //******************************************************//

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->canExecute(executor);
		std::cout << BB << this->target
				  << MT << "has been pardoned by "
				  << GD << "Zaphod Beeblebrox"
				  << MT << "." << RT << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << NR << "Since it seems that "
				  << e.what()
				  << NR << " The Pardon won't be executed."
				  << BL << " Aborting"
				  << BW << "..." << RT << std::endl;
	}

	return ;
}
