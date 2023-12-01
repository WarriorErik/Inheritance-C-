#pragma once
#include "BaseAccount.h"
class SavingsAccount : public BaseAccount
{

public:

	SavingsAccount(float balance);
	SavingsAccount();

	void Withdraw(float amt);
private:



};

