#include "Account.hpp"
#include <iostream>
#include <ctime>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

	int	Account::getNbAccounts( void )
	{
		return _nbAccounts;
	}
	int	Account::getTotalAmount( void )
	{
		return _totalAmount;
	}
	int	Account::getNbDeposits( void )
	{
		return _totalNbDeposits;
	}
	int	Account::getNbWithdrawals( void )
	{
		return _totalNbWithdrawals;
	}
	int		Account::checkAmount( void ) const
	{
		return _amount;
	}
	void	Account::displayAccountsInfos( void )
	{
		_displayTimestamp();
		std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;	
	}

	void	Account::displayStatus( void ) const
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
	}

	void	Account::_displayTimestamp( void )
	{
		std::time_t time = std::time(0);
		std::tm* now = std::localtime(&time);

		std::cout << "[" << (now->tm_year + 1900) << (now->tm_mon + 1) <<  now->tm_mday << "_" <<  now->tm_hour <<  now->tm_min <<  now->tm_sec; std::cout << "] ";
	}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

	Account::~Account()
	{
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";amount:" << _amount << ";closed\n";
	}

	void	Account::makeDeposit( int deposit )
	{
		_totalNbDeposits++;
		_nbDeposits++;
		_totalAmount += deposit;
		_amount += deposit;
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";p_amount:" << _amount  - deposit<< ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits <<std::endl;
	}

	bool	Account::makeWithdrawal( int withdrawal )
	{
		if (withdrawal > _amount)
		{
			_displayTimestamp();
			std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
			return false;
		}
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_amount -= withdrawal;

		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount  + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals <<std::endl;
		return true;
	}
