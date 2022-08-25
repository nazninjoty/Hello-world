#include<iostream>
using namespace std;
int main()
{
    int age[10];
    for (int j=0;j<10;j++)
    {
        cout <<"Enter an age: ";
        cin >> age[j];
    }
    for(int j=0;j<10;j++)
        cout <<"You entered " << age[j] <<endl;
    return 0;
}
