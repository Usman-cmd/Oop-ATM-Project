#include "User.h"

void User::deepCopy(char* src, char* dest)
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

User::User()
{
	Name = new char[1]{ '\0' };
	Address = new char[1]{ '\0' };
	PhoneNumber = 02354334;
}

User::User(char* Name, char* Address, int PhoneNumber)
{
	this->Name = new char[strlen(Name) + 1];
	strcpy_s(this->Name, strlen(Name)+1, Name);

	this->Address = new char[strlen(Address) + 1];
	strcpy_s(this->Name, strlen(Address) + 1, Address);

	this->PhoneNumber = PhoneNumber;

}

User::User(const User& obj)
{
	deepCopy(obj.Name, this->Name);
	deepCopy(obj.Address, this->Address);

	PhoneNumber = obj.PhoneNumber;
}

void User::setName(char* Name)
{
	if (this->Name != nullptr)
	{
		delete[]this->Name;
		this->Name = nullptr;
	}
	this->Name = new char[strlen(Name) + 1];
	strcpy_s(this->Name, strlen(Name) + 1, Name);
}

void User::setAddress(char* Address)
{
	if (this->Address != nullptr)
	{
		delete[]this->Address;
		this->Address = nullptr;
	}
	this->Address = new char[strlen(Address) + 1];

	strcpy_s(this->Address, strlen(Address) + 1, Address);
}

void User::setPhoneNumber(int PhoneNumber)
{
	if (PhoneNumber > 1)
	{
		this->PhoneNumber = PhoneNumber;
	}
}

char* User::getName() const
{
	char* temp = new char[strlen(Name) + 1];
	strcpy_s(temp, strlen(Name) + 1, Name);
	return temp;
}

char* User::getAddress() const
{
	char* Atemp = new char[strlen(Address) + 1];
	strcpy_s(Atemp, strlen(Address) + 1, Address);
	return Atemp;
}

int User::getPhoneNumber() const
{
	return PhoneNumber;
}
