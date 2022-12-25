#pragma once
#include"BankAccount.h"
class SavingAccount:public BankAccount
{
	float InterestRate;
public:
	//Constructor
	SavingAccount(float InterestRate);
	//Setter
	void setInterestRate(float InterestRate);
	//Getter
	float getInterestRate()const;
};

void interestfunc(int interest,int amount,int time,int rate)
{
	interest = (amount * time * rate) / 100;
}

