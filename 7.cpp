#include<iostream>
using namespace std;
int main()
{
    int amount, years;
    float rate, total;

    cout<<"Enter initial amount: ";
    cin>>amount;
    cout<<"Enter number of years: ";
    cin>>years;
    cout<<"Enter interest rate (percent per year): ";

    cin>>rate;
    rate=rate/100;
    total=amount;

    for(int i=0;i<years;i++){
        total=total + (total * rate);
    }
    cout<<"At the end of "<<years<<" years you will have "<<total<<" dollars";

    return 0;
}
