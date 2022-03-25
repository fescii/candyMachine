#include<iostream>
#include "cashRegister.h"
#include "dispenserType.h"

using namespace std;

void showSelection()
{
    cout<<"*** Welcome To Femar's Candy Shop ***"<<endl;
    cout<<"To select an item, Enter"<<endl;
    cout<<"1 for Candy"<<endl;
    cout<<"2 for Chips"<<endl;
    cout<<"3 for Gum"<<endl;
    cout<<"4 for Cookies"<<endl;
    cout<<"9 to Exit"<<endl;
}


void sellProduct(dispenserType& product, cashRegister& pCouter)
{
    int amount; //Variable to hold the amount Entered.
    int amount2; //Variable to hold the extra amount needed.

    if(product.count() > 0)
    {
        cout<<"Please deposit "<<product.productCost()<<"Ksh."<<endl;
        cin>>amount;


        if(amount < product.productCost())
        {
            cout<<"Please Deposit another "<<product.productCost() - amount<<" Ksh"<<endl;
            cin>>amount2;
            amount = amount + amount2;
        }

        if(amount >= product.productCost())
        {
            pCouter.acceptAmount(amount);
            product.makeSale();
            cout<<"Collect Your Items at The buttom"<<" and Enjoy."<<endl;
        }
        else
        {
            cout<<"The Amount is not Enough! "<<"Collect your what you deposited."<<endl;
            cout<<"*_*_*_*_*_*_*_*_*__*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*"<<endl<<endl;
        }
    }

    else
    {
        cout<<"Sorry this item is sold out."<<endl;
    }
}

int main()
{
    cashRegister counter;
    dispenserType candy(100, 20);
    dispenserType chips(100, 40);
    dispenserType gum(75, 5);
    dispenserType cookies(100, 10);

    int choice;

    showSelection();
    cin>>choice;

    while(choice != 9)
    {
        switch(choice)
        {
            case 1: sellProduct(candy, counter);
            break;

            case 2: sellProduct(chips, counter);
            break;

            case 3: sellProduct(gum, counter);
            break;

            case 4: sellProduct(cookies, counter);
            break;

            default: cout<<"Invalid Section!"<<endl;
            break;
        } //end switch

        showSelection();
        cin>>choice;
    }//end while.

return 0;
}
