/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:57 by jlebre            #+#    #+#             */
/*   Updated: 2023/04/25 22:31:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <stdlib.h>
typedef std::string str;

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
	std::cout << "[TIME]";    
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	//_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	_totalAmount += _amount;
	std::cout << "created\n";
}

Account::~Account()
{
	//_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	std::cout << "closed\n";
}

void	Account::displayAccountsInfos(void) {
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::makeDeposit(int deposit)
{
	int	final;

	_nbDeposits++;
	_totalNbDeposits++;
	final = _amount + deposit;
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "p_amount:" << _amount <<";";
	std::cout << "deposit:" << deposit <<";";
	std::cout << "amount:" << final <<";";
	std::cout << "nb_deposits:" << _nbDeposits <<"\n";
	_amount = final;
	return ;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int	final;

	_nbDeposits++;
	_totalNbWithdrawals++;
	final = _amount - withdrawal;
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "p_amount:" << _amount <<";";
	if (final < 0)
		std::cout << "withdrawal:refused\n";
	else
	{
		std::cout << "withdrawal:" << withdrawal <<";";
		std::cout << "amount:" << final <<";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals <<"\n";
		_amount -= withdrawal;
	}
	return (0);
}

void Account::displayStatus(void) const
{
	std::cout << "index:" << _accountIndex <<";";
	std::cout << "amount:" << _amount <<";";
	std::cout << "deposits:" << _nbDeposits <<";";
	std::cout << "withdrawals:" << _nbWithdrawals <<"\n";
}
