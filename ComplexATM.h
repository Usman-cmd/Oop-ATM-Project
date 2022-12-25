#pragma once
#include"ATM.h"
#include"BankAccount.h"
#include"User.h"
class ComplexATM:public ATM
{
public:
	void DisplayMenu();
	//Operator Overloading
	void operator -(BankAccount& obj);
	void operator *(BankAccount& obj);
	void operator %(BankAccount& obj);
	void operator ^(BankAccount& obj);

	//ostream operator<<(ostream& out, User& obj);
};