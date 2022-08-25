#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int pound1, shilling1, pence1, pound2, shilling2, pence2, poundSum, shillingSum, penceSum;
    char ch;
    do
    {
        cout<<"Enter first amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound1;
        cout<<"Enter Shilling: ";
        cin>>shilling1;
        cout<<"Enter Pence: ";
        cin>>pence1;

        cout<<"Enter second amount: \x9c"<<endl;
        cout<<"Enter Pound: ";
        cin>>pound2;
        cout<<"Enter Shilling: ";
        cin>>shilling2;
        cout<<"Enter Pence: ";
        cin>>pence2;

        poundSum=pound1+pound2;
        shillingSum=shilling1+shilling2;
        penceSum=pence1+pence2;

        if (penceSum >= 12){
            shillingSum = shillingSum + (penceSum/12);
            penceSum = penceSum%12;
        }

        if (shillingSum >= 20){
            poundSum = poundSum + (shillingSum/20);
            shillingSum = shillingSum%20;
        }

        cout<<"Total is :\x9c"<<poundSum<<"."<<shillingSum<<"."<<penceSum<<endl;
        cout<<"Do you wish to continue (y/n)?"<<endl;
        ch=getche();
    }while(ch=='y');

    return 0;
}
