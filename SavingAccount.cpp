#include "SavingAccount.h"

SavingAccount::SavingAccount(float InterestRate)
{
	this->InterestRate = InterestRate;
}

void SavingAccount::setInterestRate(float InterestRate)
{
	if (InterestRate > 1)
	{
		this->InterestRate = InterestRate;
	}
}

float SavingAccount::getInterestRate() const
{
	return InterestRate;
}

