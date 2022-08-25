#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    char op, i;
    float num1, num2, ans;

    start:
        cout<<"Enter first number, operator, second number: ";
        cin>>num1>>op>>num2;
        switch(op)
        {
            case '+':
            ans=num1+num2;
            break;
            case '-':
                ans=num1-num2;
                break;
            case '*':
                ans=num1*num2;
                break;
            case '/':
                ans=num1/num2;
                break;
            default:
                cout<<"Invalid input.";
        }

        cout<<"Answer = "<<ans<<endl;
        cout<<"Do another (y/n)? ";
        i=getche();
        cout<<endl;

    if(i=='y')
        goto start;

    return 0;
}
