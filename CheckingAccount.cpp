#include <iostream>
#include <string>
using namespace std;
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(float balance) :BaseAccount(balance)
{




}

CheckingAccount::CheckingAccount()
{



}
void CheckingAccount::Withdraw(float amt)
{
	if (noOfWithdrawls > 10)
	{
		BaseAccount::Withdraw(amt + 5);
		noOfWithdrawls++;
	}
	else
	{
		BaseAccount::Withdraw(amt);
		noOfWithdrawls++;
	}
}














