#include<iostream>
#include "cashRegister.h"

using namespace std;


int cashRegister::currentBalance()
{
    return cashOnHand;
}


void cashRegister::acceptAmount(int amountIn)
{
    cashOnHand += amountIn;
}

cashRegister::cashRegister(int cashIn)
{
    if(cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}

