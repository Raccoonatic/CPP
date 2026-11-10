/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Harl.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/16 10:26:54 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/17 13:19:09 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}

static void	voiceDefComplain(void)
{
	std::cout<<GD<< "["
			 <<NR<< " Probably complaining about insignificant problems "
			 <<GD<< "]" <<RT<<std::endl<<std::endl;
}

static int	getComplainIndex(std::string level)
{
	std::string	keys[4];

	keys[0] = "DEBUG";
	keys[1] = "INFO";
	keys[2] = "WARNING";
	keys[3] = "ERROR";

	for (int i = 0; i < 4; i++)
	{
		if (keys[i] == level)
			return (i);
	}

	return (-1);
}

void	Harl::complain(std::string level)
{
	void	(Harl::*grumps[4])(void);

	grumps[0] = &Harl::debug;
	grumps[1] = &Harl::info;
	grumps[2] = &Harl::warning;
	grumps[3] = &Harl::error;

	switch (getComplainIndex(level))
	{
		case (0):
			(this->*grumps[0])();
			// fallthrough
		case (1):
			(this->*grumps[1])();
			// fallthrough
		case (2):
			(this->*grumps[2])();
			// fallthrough
		case (3):
			(this->*grumps[3])();
			break ;
		default:
			voiceDefComplain();
	}

	return ;
}

void	Harl::debug(void)
{
	std::cout<<GD<<"[ "<<BB<<"DEBUG"<<GD<<" ]"<<RT<<std::endl
			 <<BW<< "I love having extra bacon for my "<<std::endl
			 <<LM<< "7XL-double-cheese-triple-pickle-special-ketchup"<<std::endl
			 <<BW<<	"burger. I really do!" <<RT<<std::endl<<std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout<<GD<<"[ "<<MT<<"INFO"<<GD<<" ]"<<RT<<std::endl
			 <<BB<< "I cannot believe adding extra bacon costs more money."<<std::endl
			 <<BW<<	"You didn't put enough bacon in my burger! If you did, "<<std::endl
			 << 	"I wouldn't be asking for more!" <<RT<<std::endl<<std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout<<GD<<"[ "<<HT<<"WARNING"<<GD<<" ]"<<RT<<std::endl
			 <<BW<< "I think I deserve to have some extra bacon for "<<LM<<"free. "<<std::endl
			 <<BW<<	"I've been coming for years, whereas you started working "<<std::endl
			 << 	"here just last month." <<RT<<std::endl<<std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout<<GD<<"[ "<<BL<<"ERROR"<<GD<<" ]"<<RT<<std::endl
			 <<BW<< "This is "<<BL<<"unacceptable! "<<std::endl
			 <<BW<< "I want to speak to the manager "<<BL<<"now."
			 <<RT<< std::endl;
	return ;
}
