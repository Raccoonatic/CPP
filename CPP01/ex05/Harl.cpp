/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Harl.cpp                                       ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/16 10:26:54 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/17 13:19:13 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	static std::string	keys[4];
	static void			(Harl::*grumps[4])(void);

	keys[0] = "DEBUG";
	keys[1] = "INFO";
	keys[2] = "WARNING";
	keys[3] = "ERROR";

	grumps[0] = &Harl::debug;
	grumps[1] = &Harl::info;
	grumps[2] = &Harl::warning;
	grumps[3] = &Harl::error;

	for (int i = 0; i < 4; i++)
	{
		if (keys[i] == level)
		{
			(this->*grumps[i])();
			return ;
		}
	}

	std::cout <<BW<<OG<< "Dude, why are you yelling? Chill," <<std::endl
			  <<	 "you know that "<<BB<< level
			  <<OG<< " is not a valid directive." << std::endl
			  <<PK<< "You are being very unprofessional right now."<<RT<< std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout<<BW<<OG<< "I love having extra bacon for my "<<std::endl
			 <<LM<< "7XL-double-cheese-triple-pickle-special-ketchup"<<std::endl
			 <<OG<<	"burger. I really do!" <<RT<<std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout<<HT<< "I cannot believe adding extra bacon costs more money."<<std::endl
			 <<OG<<	"You didn't put enough bacon in my burger! If you did, "<<std::endl
			 << 	"I wouldn't be asking for more!" <<RT<<std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout<<BW<<OG<< "I think I deserve to have some extra bacon for "<<LM<<"free. "<<std::endl
			 <<OG<<	"I've been coming for years, whereas you started working "<<std::endl
			 << 	"here just last month." <<RT<<std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout<<BW<<OG<< "This is "<<BL<<"unacceptable! "<<std::endl
			 <<OG<< "I want to speak to the manager "<<BL<<"now."
			 <<RT<< std::endl;
	return ;
}
