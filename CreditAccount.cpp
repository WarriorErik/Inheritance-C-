#include "CreditAccount.h"
#include <iostream>
#include <string>
using namespace std;


const double CreditAccount::LIMIT = 40;

CreditAccount::CreditAccount()
{
	this->charge = 0;
	this->amount = LIMIT;
}

void CreditAccount::Withdraw(float amt)
{
	if (LIMIT - amt < 0)
	{
		this->charge += 4000;
	}
	else 
	{
		this->amount -= amt;
	}
}

double CreditAccount::getLimit()
{
	cout << "Charges :$" << charge << endl;
	return amount;
}




























