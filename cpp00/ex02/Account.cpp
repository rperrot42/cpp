

#include "Account.hpp"
#include "iostream"
#include "ctime"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	Account::_displayTimestamp();
	this->_nbDeposits=0;
	this->_nbWithdrawals=0;
	this->_accountIndex=Account::_nbAccounts;
	this->_amount=initial_deposit;
	Account::_nbAccounts++;
	Account::_totalAmount+=initial_deposit;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(){
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ){
	Account::_displayTimestamp();
	this->_nbDeposits = 1;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this -> _amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount){
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals = 1;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void 	Account::displayStatus( void ) const{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
int Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}
int Account::getTotalAmount( void ){
	return Account::_totalAmount;
}
int Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}
int Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ){
	std::time_t time = std::time(0);
	std::tm* now = std::localtime(&time);
	std::cout << "[" << now->tm_year + 1900 ;
	if (now->tm_mon + 1 < 10)
		std::cout << "0";
	std::cout << now->tm_mon + 1;
	if (now->tm_mday < 10)
		std::cout << "0";
	std::cout << now->tm_mday << "_" ;
	if (now->tm_hour < 10)
		std::cout << "0";
	std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << "0";
	std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << "0";
	std::cout << now->tm_sec << "] ";
}