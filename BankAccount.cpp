#include "BankAccount.h"

void BankAccount::deepCopy(char* src, char* dest)
{
	if (dest != nullptr)
	{
		delete[] dest;
		dest = nullptr;
	}
	dest = new char[strlen(src) + 1];
	for (int i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[strlen(src)] = '\0';

}

BankAccount::BankAccount()
{
	cout << "Bank's non=parameterized constructor:" << endl;
	BankName = new char[1]{ '\0' };
	Branch = new char[1]{ '\0' };
	TotalCash = 5005.10;

}

BankAccount::BankAccount(char* BankName, char* Branch, float TotalCash)
{
	cout << "Bank's parameterized constructor:" << endl;
	this->BankName = new char[strlen(BankName) + 1];
	strcpy_s(this->BankName, strlen(BankName) + 1, BankName);

	this->Branch = new char[strlen(Branch) + 1];
	strcpy_s(this->Branch, strlen(Branch) + 1, Branch);

	this->TotalCash = TotalCash;
}

BankAccount::BankAccount(const BankAccount& obj)
{
	cout << "Banck's Copy Constructor:" << endl;
	deepCopy(obj.BankName, this->BankName);
	deepCopy(obj.Branch, this->Branch);
	
	TotalCash = obj.TotalCash;

}

void BankAccount::setBankName(char* BankName)
{
	if (this->BankName != nullptr)
	{
		delete[]this->BankName;
		this->BankName = nullptr;
	}
	this->BankName = new char[strlen(BankName) + 1];


	strcpy_s(this->BankName, strlen(BankName) + 1, BankName);
}

void BankAccount::setBranch(char* Branch)
{
	if (this->Branch != nullptr)
	{
		delete[]this->Branch;
		this->Branch = nullptr;
	}
	this->Branch = new char[strlen(Branch) + 1];


	strcpy_s(this->Branch, strlen(Branch) + 1, Branch);
}

void BankAccount::setTotalCash(float TotalCash)
{
	if (TotalCash > 1)
	{
		this->TotalCash = TotalCash;
	}
}

char* BankAccount::getBankName() const
{
	char* temp = new char[strlen(BankName) + 1];
	strcpy_s(temp, strlen(BankName) + 1, BankName);
	return temp;
}

char* BankAccount::getBranch() const
{
	char* temp = new char[strlen(Branch) + 1];
	strcpy_s(temp, strlen(Branch) + 1, Branch);
	return temp;
}

float BankAccount::getTotalCash() const
{
	return TotalCash;
}
