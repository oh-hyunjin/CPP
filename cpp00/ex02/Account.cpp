#include <iostream>
#include <time.h> // 가능?
#include "Account.hpp"

int Account::getNbAccounts() { // Q. 여기에는 static 안 쓰나?
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbDeposits() {
	return _totalNbDeposits; // 맞나
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals; // 맞나
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts << ";";
	std::cout << "total:" << getTotalAmount << ";";
	std::cout << "deposits:" << getNbDeposits << ";";
	std::cout << "withdrawals:" << getNbWithdrawals << ";";
	std::cout << std::endl;
}

Account::Account() {
	_accountIndex = _nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts++;
	makeWithdrawal(initial_deposit);
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::makeDeposit(int deposit){
	_nbDeposits += deposit;
	_totalNbDeposits += deposit;	
}

bool Account::makeWithdrawal(int withdrawal) {
	if (_nbWithdrawals < withdrawal)
		return false;
	_nbWithdrawals += withdrawal;
	_totalNbWithdrawals += withdrawal;
	return true;
}

int Account::checkAmount() const {

}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << ";";
	std::cout << std::endl;
}

void Account::_displayTimestamp() {
	time_t rawtime;
	struct tm* timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%Z%m%d_%H%M%S] ", timeinfo);
	puts(buffer);
}