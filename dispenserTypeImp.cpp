#include<iostream>
#include "dispenserType.h"

using namespace std;

int dispenserType::count()
{
    return numberOfItems;
}

int dispenserType::productCost()
{
    return cost;
}


void dispenserType::makeSale()
{
    numberOfItems--;
}


//Constructor
dispenserType::dispenserType(int setNoOfItems, int setCost)
{
    if(setNoOfItems >= 0)
        numberOfItems = setNoOfItems;
    else
        numberOfItems = 50;

    if(setCost >= 0)
        cost = setCost;
    else
        cost = 50;
}
