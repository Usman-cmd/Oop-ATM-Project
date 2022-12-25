#include "BasicATM.h"


int num;
void BasicATM::DisplayMenu(int num)
{
	cout << "Select your Transaction:" << endl;
	cout << "1. Press “1” to withdrawal" << endl;
	cout << "2. Press “2” to display information" << endl;
	cin >> num;
}

void BasicATM::operator-(BankAccount& obj)
{
	if (num == 1)
	{
		float withdrawal;
		cout << "How much would you like to withdraw:";
		cin >> withdrawal;
		obj.TotalCash = obj.TotalCash - withdrawal;
	}
}
