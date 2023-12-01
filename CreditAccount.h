#pragma once
#include "BaseAccount.h"
#include <string>

class CreditAccount : public BaseAccount
{

public:
	// parameterized constructor
	CreditAccount();

	void Withdraw(float amt);
	double getLimit();
private:
	const static double LIMIT;
	float charge;
	float amount;



};

