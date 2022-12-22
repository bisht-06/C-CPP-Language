#include<iostream>
using namespace std;

class test
{
    int a, b, c;
    public :
    test()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    test(int x, int y)
    {
        a = x;
        b = y;
    }
    test operator +(test t)
    {
        test temp;
        temp.a = a+t.a;
        temp.b = b+t.b;
        return temp;
    }
    void disp()
    {
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
    }
};


int main()
{
test a(50, 60);
test b(5, 6);
test c;
c = a+b;
c.disp();



return 0;
}