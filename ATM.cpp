#include "ATM.h"

void ATM::TakeInput(int CardNumber, int PIN, Card& obj)
{
	cout << "Enter Card Number:";
	cin >> CardNumber;
	obj.setCardNumber(CardNumber);
	obj.getCardNumber();
	cout << "Enter PIN Number:";
	cin >> PIN;
	obj.setPIN(PIN);
	obj.getPIN();
}
