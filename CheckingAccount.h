#pragma once
#include"BankAccount.h"
class CheckingAccount:public BankAccount
{
	float FeePerTransaction;
public:
	//Constructor
	CheckingAccount(float FeePerTransaction);
	//Setter
	void setFeePerTransaction(float FeePerTransaction);
	//Getter
	float getFeePerTransaction()const;
};

