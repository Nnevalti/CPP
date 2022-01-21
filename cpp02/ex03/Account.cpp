#include "Account.hpp"

int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created"  << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed"  << std::endl;
}

int	Account::getNbAccounts( void ) { return _nbAccounts; }
int	Account::getTotalAmount( void ) { return _totalAmount; }
int	Account::getNbDeposits( void ) { return _totalNbDeposits; }
int	Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal < _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return true;
	}
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused"  << std::endl;
	return false;
}
int		Account::checkAmount( void ) const
{
	return 0;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals  << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
	std::cout << "[" << t << "] ";
	return ;
}
