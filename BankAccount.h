#pragma once
#include<iostream>
using namespace std;
class BankAccount
{
public:
	char* BankName;
	char* Branch;
	float TotalCash;

	void deepCopy(char* src, char* dest);
public:
	//Constructor
	BankAccount();
	BankAccount(char* BankName, char* Branch, float TotalCash);
	BankAccount(const BankAccount& obj);
	//Setters
	void setBankName(char* BankName);
	void setBranch(char* Branch);
	void setTotalCash(float TotalCash);
	//Getters
	char* getBankName()const;
	char* getBranch()const;
	float getTotalCash()const;


};

