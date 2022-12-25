#include "Card.h"

Card::Card()
{
	CardNumber = 232323;
	PIN = 1122;
}

//Constructor
Card::Card(int CardNumber, int PIN)
{
	this->CardNumber = CardNumber;
	this->PIN = PIN;
}
//Setters
void Card::setCardNumber(int CardNumber)
{
	if (CardNumber > 1)
	{
		this->CardNumber = CardNumber;
	}
}
void Card::setPIN(int PIN)
{
	if (PIN > 1)
	{
		this->PIN = PIN;
	}
}
//Getters
int Card::getCardNumber() const
{
	return CardNumber;
}
int Card::getPIN() const
{
	return PIN;
}

void Card::Display() const
{
	cout << "Card Number: " << getCardNumber() << endl;
	cout << "PIN: " << getPIN();
}

