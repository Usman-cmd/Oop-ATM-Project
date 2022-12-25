#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(float FeePerTransaction)
{
	this->FeePerTransaction = FeePerTransaction;
}

void CheckingAccount::setFeePerTransaction(float FeePerTransaction)
{
	if (FeePerTransaction > 1)
	{
		this->FeePerTransaction = FeePerTransaction;
	}
}

float CheckingAccount::getFeePerTransaction() const
{
	return FeePerTransaction;
}
