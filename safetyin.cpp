#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    const int MAX=20;
    char str[MAX];

    cout <<"\nEnter a string: ";
    cin >> setw(MAX) >> str;

    cout <<"you entered: "<<str << endl;
    return 0;
}
