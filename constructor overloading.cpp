#include<iostream>
using namespace std;
class rect
{
private:
    int area;
public:
    rect ()
    {
        area =0;
    }
    rect (int a, int b)
    {
        area =a*b;
    }
    void display()
    {
        cout << "The area is:"<<area<<endl;
    }
};
main()
{
    rect r1;
    rect r2(2,6);
    r1.display();
    r2.display();
}
