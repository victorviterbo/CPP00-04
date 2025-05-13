/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 11:57:22 by vviterbo          #+#    #+#             */
<<<<<<< Updated upstream
/*   Updated: 2025/05/13 17:39:45 by vviterbo         ###   ########.fr       */
=======
/*   Updated: 2025/05/13 17:29:40 by vviterbo         ###   ########.fr       */
>>>>>>> Stashed changes
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
	std::cout << "index:" << _accountIndex << ";amount:" << _amount ;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount ;
	std::cout << ";closed" << std::endl;
}

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
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount + deposit; 
	std::cout << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
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
		
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout << withdrawal << ";amount:" << _amount - withdrawal; 
	std::cout << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
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
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t	now;
    char 		timestamp[18];
	
	now = std::time(NULL);
    std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", std::localtime(&now));
    std::cout << timestamp << ' ';
}