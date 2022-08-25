#include<iostream>
using namespace std;

int func(int num)
{
    int count =0;
    while (num>0)
    {
        count++;
        num>>1;
    }
    return (count);
}
int main()
{
    cout<<func(435);
}
