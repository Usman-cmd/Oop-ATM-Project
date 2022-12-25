#pragma once
#include"User.h"
#include"Card.h"
class ATM
{
public:
	void TakeInput(int CardNumber, int PIN, Card& obj);
};
