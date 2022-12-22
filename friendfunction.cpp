#include<iostream>
using namespace std;

class one
{
    int a;
    public :
    int z;
    void getdata(int x)
    {
        z = x;
    }
};

class two 
{
    int b;
    public :
    void getdata(int y)
    {
        b = y;
    }

    friend int sum(one obj1, two obj2);
};

int sum(one obj1, two obj2)
    {
        return (obj1.z+obj2.b);
    }

int main()
{

one obj;
two obj2;

obj.getdata(50);
obj2.getdata(30);
cout<<"sum is : "<<sum(obj, obj2);


return 0;
}