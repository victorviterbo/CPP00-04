/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:57:22 by vviterbo          #+#    #+#             */
/*   Updated: 2025/05/08 18:59:50 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts += 1;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int		Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int		Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:";
	std::cout << getTotalAmount() << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawal:" << getNbWithdrawals() << std::endl;
}
cat <(cat out | cut -d' ' -f2-) <(cat 19920104_091532.log | cut -d' ' -f2-)
void	Account::makeDeposit( int deposit )
{
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_amount += deposit;
	_nbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << 
		";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << 
		";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";amount:" << _amount - withdrawal; 
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_amount -= withdrawal;
	_nbWithdrawals += 1;
	
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";deposits:" << _nbDeposits << ";withdrawal:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
    char 		timestamp[18];
	
	now = std::time(NULL);
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", std::localtime(&now));
    std::cout << timestamp << ' ';
}