#pragma once
#include"BankAccount.h"
#include"Card.h"

class User
{
	char* Name;
	char* Address;
	int PhoneNumber;

	void deepCopy(char* src, char* dest);
public:
	//Constructors
	User();
	User(char* name, char* Address, int PhoneNumber);
	User(const User& obj);
	//Setters
	void setName(char* Name);
	void setAddress(char* Address);
	void setPhoneNumber(int PhoneNumber);
	//Getters
	char* getName()const;
	char* getAddress()const;
	int getPhoneNumber()const;
};

