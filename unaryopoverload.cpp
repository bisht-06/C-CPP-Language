#include<iostream>
using namespace std;

class test
{
    int a, b;
    public :
    void getdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void operator - ()
    {
        a = -a;
        b = -b;
    }
    void disp()
    {
        cout<<a<<"  "<<b<<endl;
    }
};


int main()
{
test a;
a.getdata(10, -45);
-a;
a.disp();


return 0;
}