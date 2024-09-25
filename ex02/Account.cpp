

#include "Account.hpp"
#include "iostream"

Account::Account(int initial_deposit){
	this->_accountIndex=initial_deposit;
	//Account::_nbAccounts++;
}

Account::~Account(){

}

void Account::makeDeposit( int deposit ){
	this->_nbDeposits += deposit;
}

bool Account::makeWithdrawal( int withdrawal ){
	return withdrawal==1;
}

void	Account::displayAccountsInfos( void ){

}

void 	Account::displayStatus( void ) const{

}