#pragma once
#include <string>
#include <iostream>
using namespace std;


class BaseAccount
{


protected:
	int noOfWithdrawls;

	float balance;

private:


	static unsigned int numAccounts;

public:

	BaseAccount();

	BaseAccount(float bal);

	void Withdraw(float amount);

	void Deposit(float amount);

	float GetBalance() const;

















};

