/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:57 by jlebre            #+#    #+#             */
/*   Updated: 2023/04/26 00:17:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdlib.h>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void) {return(Account::_nbAccounts);}
int	Account::getTotalAmount(void) {return(Account::_totalAmount);}
int	Account::getNbDeposits(void) {return(Account::_totalNbDeposits);}
int	Account::getNbWithdrawals(void) {return(Account::_totalNbWithdrawals);}
int Account::checkAmount(void) const {return (Account::_amount);}

void	Account::_displayTimestamp(void)
{
	time_t		currentTime;
	struct tm	*localTime;
	char		str[20];
	
	time(&currentTime);
	localTime = localtime(&currentTime);
	strftime(str, 20, "[%Y%m%d_%H%M%S] ", localTime);
	std::cout << str;    
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	_totalAmount += _amount;
	std::cout << "created\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	std::cout << "closed\n";
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "p_amount:" << _amount <<";";
	std::cout << "deposit:" << deposit <<";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << _amount <<";";
	std::cout << "nb_deposits:" << _nbDeposits <<"\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	final;

	_displayTimestamp();
	final = _amount - withdrawal;
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "p_amount:" << _amount <<";";
	if (final < 0)
		std::cout << "withdrawal:refused\n";
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal <<";";
		std::cout << "amount:" << final <<";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals <<"\n";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	return (0);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	std::cout << "deposits:" << _nbDeposits <<";";
	std::cout << "withdrawals:" << _nbWithdrawals <<"\n";
}
