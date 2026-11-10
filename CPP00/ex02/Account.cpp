/* ************************************************************************** */
/*                                                                            */
/*                                                   ▒▓              ▓▒       */
/*   Account.cpp                                    ▒▒ ▓▓▓        ▓▓▓ ▒▒      */
/*                                                  ▒▒▒░░▒▒░▓░░▓░▒▒░░▒▒▒      */
/*   By: lde-san- <lde-san-@student.42porto.com>     █░  ░░░ ░░ ░░░  ░█       */
/*                                                   ███████░░░░███████       */
/*   Created: 2026/08/09 15:30:11 by lde-san-       ░▒▒██ ▓  ██  ▓ ██▒▒░      */
/*   Updated: 2026/08/19 16:57:20 by lde-san-           ▒ ░██  ██░ ▒          */
/*                                                         ██████             */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

		     //******************************************************//
	        //              Constructor & Destructor                //
	       //******************************************************//

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = Account::_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();

	std::cout << " index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
	return ;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";closed" << std::endl;

	Account::_nbAccounts--;
	Account::_totalAmount -= this->checkAmount();

	return ;
}

		     //******************************************************//
	        //                      Getters                         //
	       //******************************************************//

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

		     //******************************************************//
	        //                    Log Display                       //
	       //******************************************************//


void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::getNbAccounts()
			  << ";total:" << Account::getTotalAmount()
			  << ";deposits:" << Account::getNbDeposits()
			  << ";withdrawals:" << Account::getNbWithdrawals()
			  << std::endl;
	return ;
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();

	std::cout << " index:" << this->_accountIndex
			  << ";amount:" << this->checkAmount()
			  << ";deposits:" << this->_nbDeposits
			  << ";withdrawals:" << this->_nbWithdrawals
			  << std::endl;
	return ;
}

void	Account::_displayTimestamp(void)
{
	std::time_t		raw_time;
	struct std::tm*	parsed_time;
	char			timestamp[20];

	raw_time= std::time(NULL);
	parsed_time = std::localtime(&raw_time);
	std::strftime(timestamp, sizeof(timestamp), "%Y%m%d_%H%M%S", parsed_time);

	std::cout << "[" << timestamp << "]";

	return ;
}

		     //******************************************************//
	        //                  Account Operations                  //
	       //******************************************************//

void	Account::makeDeposit(int deposit)
{
	int p_amount;

	p_amount = this->checkAmount();

	Account::_displayTimestamp();

	if (deposit < 0)
	{
		std::cout << " index:" << this->_accountIndex
				  << ";p_amount:" << p_amount
				  << ";deposit:refused" << std::endl;
		return ;
	}

	this->_amount += deposit;
	this->_nbDeposits++;

	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << p_amount
			  << ";deposit:" << deposit
			  << ";amount:" << this->checkAmount()
			  << ";nb_deposits:" << this->_nbDeposits
			  << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = this->checkAmount();

	if (this->checkAmount() < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex
				  << ";p_amount:" << p_amount
				  << ";withdrawal:refused" << std::endl;
		return (false);
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex
			  << ";p_amount:" << p_amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << this->checkAmount()
			  << ";nb_withdrawals:" << this->_nbWithdrawals
			  << std::endl;

	return (true);
}
