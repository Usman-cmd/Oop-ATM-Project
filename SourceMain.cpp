#include"ATM.h"
#include"BankAccount.h"
#include"BasicATM.h"
#include"Card.h"
#include"CheckingAccount.h"
#include"ComplexATM.h"
#include"SavingAccount.h"
#include"User.h"
#include "ComplexATM.cpp"


istream& operator >> (istream& in, User& obj)
{
	char name[20];
	int phoneNumber;
	char address[20];

	cout << "Enter your Name:" << endl;
	in.ignore();
	in.getline(name, 20);

	cout << "Enter your Phone Number:" << endl;
	in >> phoneNumber;

	cout << "Enter your Address:" << endl;
	in.ignore();
	in.getline(address, 20);

	obj.setName(name);
	obj.setPhoneNumber(phoneNumber);
	obj.setAddress(address);

	return in;
};

ostream& operator<<(ostream & out, const User & obj)
{
	cout << "User's Name:" << endl;
	out << obj.getName() << endl;
	cout << "Phone Number:" << endl;
	out << obj.getPhoneNumber() << endl;
	cout << "Address:";
	out << obj.getAddress() << endl;

	return out;
}

int main()
{
	ATM A;
	User U;
	Card obj;
	ComplexATM CA();
	ComplexATM DisplayMenu();
	cout << CA;
	int CardNo, PIN;
	cout << "Enter Card Number:";
	cin >> CardNo;
	cout << " Enter PIN";
	cin >> PIN;
	Card C(CardNo, PIN);
	C.Display();
	A.TakeInput(CardNo, PIN, C);
	User u1;
	cin >> u1;
	cout << u1;
}