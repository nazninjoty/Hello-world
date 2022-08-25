#include<iostream>
using namespace std;
class smallobj
{
private:
    int somedata;
public:
    void x(int d)
    {
        somedata=d;
    }
    void showdata()
    {
        cout <<"Data is " << somedata <<endl;
    }
};
int main()
{
    smallobj s1,s2,s3;
    s1.x(1414);
    s2.x(2015);
    s3.x(1865);

    s1.showdata();
    s2.showdata();
    s3.showdata();
    return 0;
}
