
#include <iostream>
using namespace std;
int main()
{
    unsigned int numb;
    unsigned long fact;
    int stop;

    cout<<"Enter a number: ";
    cin>>numb;

    do
    {
        fact=1;
        for(int j=numb; j>0; j--)
            fact *= j;

        cout<<"Factorial is "<<fact<<endl;
        cout<<"Enter a number to continue..."<<endl;
        cout<<"Enter 0 to stop..."<<endl;
        cin>>numb;
    }
    while(numb!=0);

    return 0;
}
