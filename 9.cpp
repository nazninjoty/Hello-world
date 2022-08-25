
#include<iostream>
using namespace std;
int main()
{
    int years=0;
    float rate, amount, total;

    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter final amount: ";
    cin>>total;
    cout<<"Enter interest rate (percent per year): ";
    cin>>rate;
    rate=rate/100;

    while(total>=amount)
    {
        amount=amount + (amount * rate);
        years++;
    }

    cout<<"At the end of "<<years<<" years you will have "<<total<<" dollars";

    return 0;
}
