#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d,resN,resD;
    char dummyChar, ch, choice;

    do
    {
        cout<<"Enter operator: ";
        cin>>ch;
        cout<<"Enter first fraction in the form of a/b:";
        cin>>a>>dummyChar>>b;
        cout<<"Enter second fraction in the form of c/d:";
        cin>>c>>dummyChar>>d;

        switch(ch)
        {
            case '+':
                resN=(a*d)+(b*c);
                resD=b*d;
                break;
            case '-':
                resN=(a*d)-(b*c);
                resD=b*d;
                break;
            case '*':
                resN=(a*c);
                resD=b*d;
                break;
            case '/':
                resN=a*d;
                resD=b*c;
                break;
        }

        cout<<a<<"/"<<b<<ch<<c<<"/"<<d<<" = "<<resN<<"/"<<resD<<endl;
        cout<<"Do you wish to continue (y/n)?"<<endl;
        choice=getche();
        cout<<endl;
    }while(choice=='y');

    return 0;
}
