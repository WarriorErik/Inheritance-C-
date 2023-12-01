#include <iostream>
#include <string>
#include "BaseAccount.h"
using namespace std;



BaseAccount::BaseAccount()
{

	this->balance = 0;

}


BaseAccount::BaseAccount(float bal)
{

	this->balance = bal;

}

void

BaseAccount::Withdraw(float amount)
{

	if (balance - amount >= 0)

	{

		this->balance -= amount;

		noOfWithdrawls++;

	}

	else
	{

		cout << "____Insufficient funds____" << endl;

	}

}



void
BaseAccount::Deposit(float amount)
{

	this->balance += amount;

}
float

BaseAccount::GetBalance() const const
{

	return balance;

}
















