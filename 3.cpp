
#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
    int i, j, k, c=5;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<c;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"X";
        }
        cout<<endl;
        c--;
    }

    return 0;
}
