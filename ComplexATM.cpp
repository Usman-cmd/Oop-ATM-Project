#include "ComplexATM.h"

int num;
void ComplexATM::DisplayMenu()
{
	cout << "Select your transaction:" << endl;
	cout << "1. Press “1” to withdrawal" << endl;
	cout << "2. Press “2” for balance inquiry" << endl;
	cout << "3. Press “3” to transfer money" << endl;
	cout << "4. Press “4” to change your PIN" << endl;
	cout << "5. Press “5” to display information" << endl;
	cin >> num;
}

void ComplexATM::operator-(BankAccount& obj)
{
	if (num == 1)
	{
		float withdrawal;
		cout << "How much would you like to withdraw:";
		cin >> withdrawal;
		obj.TotalCash = obj.TotalCash - withdrawal;
	}
}

void ComplexATM::operator*(BankAccount& obj)
{
	if (num == 2)
	{
		cout << "Balance Inquiry:";
		cout << obj.TotalCash;
	}
}
void ComplexATM::operator%(BankAccount& obj)
{
	if (num == 3)
	{
		float transfer;
		cout << "How much money would you like to transfer:";
		cin >> transfer;
		cout << "Amount " << transfer << " is transferred";
		obj.TotalCash = obj.TotalCash - transfer;
	}
}

void ComplexATM::operator^(BankAccount& obj)
{
	if (num == 4)
	{
		int changePIN;
		cout << "Enter your new PIN:";
		cin >> changePIN;
		cout <<"PIN has been changed successfully";
	}
}


//ostream ComplexATM::operator<<(ostream& out, User& obj)
//{
//	if (num == 5)
//	{
//		cout << "User's Name:" << endl;
//		cout << obj.getName() << endl;
//		cout << "Phone Number:" << endl;
//		cout << obj.getPhoneNumber() << endl;
//		cout << "Address:";
//		cout << obj.getAddress() << endl;
//		return out;
//	}
//}



