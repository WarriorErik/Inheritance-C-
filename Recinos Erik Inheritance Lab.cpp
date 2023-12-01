// Recinos Erik Inheritance Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "BaseAccount.h" 
#include "CheckingAccount.h" 
#include "SavingsAccount.h" 
#include "CreditAccount.h" 
using namespace std;

int menu();
int main()
{
	srand(time(NULL));
	int choice;
	double amt;
	SavingsAccount sa;
	CheckingAccount ca;
	CreditAccount credit;


	while (true)
	{
		std::cout << "\n:: MENU ::" << std::endl;
		std::cout << "1.Savings Account" << std::endl;
		std::cout << "2.Checking Account" << std::endl;
		std::cout << "3.Credit Account" << std::endl;
		std::cout << "4.Exit" << std::endl;

		std::cout << "Enter Choice :";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			choice = menu();
			switch (choice)
			{

			case 1:
			{
				std::cout << "Enter amount to deposit :$";
				std::cin >> amt;
				sa.Deposit(amt);
				std::cout << "Your Balance :$" << sa.GetBalance() << std::endl;
				break;
			}

			case 2:
			{
				std::cout << "Enter amount to withdraw :$";
				std::cin >> amt;
				sa.Withdraw(amt);
				std::cout << "Your Balance :$" << sa.GetBalance() << std::endl;
				break;
			}

			}
			continue;
		}
		case 2:
		{
			choice = menu();
			switch (choice)
			{

			case 1:
			{
				std::cout << "Enter amount to deposit :$";
				std::cin >> amt;
				ca.Deposit(amt);
				std::cout << "Your Balance :$" << ca.GetBalance() << std::endl;
				break;
			}
			case 2:
			{
				std::cout << "Enter amount to withdraw :$";
				std::cin >> amt;
				ca.Withdraw(amt);
				std::cout << "Your Balance :$" << ca.GetBalance() << std::endl;
				break;
			}

			}
			continue;
		}

		case 3:
		{
			int shoppingBill = rand() % (5) + 1;
			std::cout << "Your Shopping Amount is :$" << shoppingBill << std::endl;
			credit.Withdraw(shoppingBill);
			std::cout << "You Limit in Credit Account :$" << credit.getLimit() << std::endl;
			continue;
		}

		case 4:
		{
			break;
		}

		default:
		{
			std::cout << "** Invalid Choice **" << std::endl;
			continue;
		}


		}

		break;
	}


	return 0;
}

int menu()
{
	int choice;
	while (true)
	{
		std::cout << "1.Deposit :" << std::endl;
		std::cout << "2.Withdraw " << std::endl;
		std::cout << "Enter Choice :";
		std::cin >> choice;
		if (choice == 1 || choice == 2)
		{
			break;
		}
		else
		{
			std::cout << "** Invalid.Must be either 1 or 2 **" << std::endl;
		}
	}
	return choice;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
