#include<iostream>
using namespace std;

class test
{
    int a, b;
    public :
    test(){}                // default (do nothing) constructor
    test(int x, int y)      //parameterized constructor
    {
        a = x;
        b = y;
    }
    test(test &ref)         //copy constructor
    {
        a = ref.a;
        b = ref.b;
    }
    void disp()
    {
        cout<<" a : "<<a<<endl;
        cout<<" b : "<<b<<endl;
    }
};


int main()
{
    test s1(5, 30);
    test s2;
    s2 = s1;            // not possible without copy constructor
    s2.disp();

return 0;
}