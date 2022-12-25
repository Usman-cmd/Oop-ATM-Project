#pragma once
#include<iostream>
using namespace std;
class Card
{
	int CardNumber;
	int PIN;
public:

	//Constructor
	Card();
	Card(int CardNumber, int PIN);

	//Setters
	void setCardNumber(int CardNumber);
	void setPIN(int PIN);

	//Getters
	int getCardNumber()const;
	int getPIN()const;

	void Display()const;

};

void Randfunc()
{
	cout << rand();
}

