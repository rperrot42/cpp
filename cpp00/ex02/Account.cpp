

#include "Account.hpp"
#include "iostream"

Account::Account(int initial_deposit){
	this->_accountIndex=Account::_nbAccounts;
	this->_amount=initial_deposit;
	std::cout << "index: " << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(){

}

void Account::makeDeposit( int deposit ){
	this->_nbDeposits += deposit;
}

bool Account::makeWithdrawal( int withdrawal ){
	return withdrawal == 1;
}

void	Account::displayAccountsInfos( void ){

}

void 	Account::displayStatus( void ) const{

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