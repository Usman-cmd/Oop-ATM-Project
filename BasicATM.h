#pragma once
#include"ATM.h"
class BasicATM:public ATM
{
public:
	void DisplayMenu(int);

	void operator -(BankAccount& obj);

};

