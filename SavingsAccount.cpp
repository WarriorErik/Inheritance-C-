#include <iostream>
#include <string>
using namespace std;
#include "SavingsAccount.h"


SavingsAccount::SavingsAccount(float balance) :BaseAccount(balance)
{


}

SavingsAccount::SavingsAccount()
{


}
void SavingsAccount::Withdraw(float amt)
{
	if (noOfWithdrawls < 3)
	{
		BaseAccount::Withdraw(amt);
		noOfWithdrawls++;
	}
}
























