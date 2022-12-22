#include<iostream>
using namespace std;

class test
{
    //static int count;
    public :
    static int count;
    void add()
    {
        count++;
    }
    void disp()
    {
        cout<<"current count value is : "<<count<<endl;
    }
};

int test :: count;

int main()
{
test t1, t2, t3;
t1.add();
t2.add();
t3.add();
t2.add();
t1.disp();

return 0;
}