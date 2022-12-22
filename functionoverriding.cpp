#include<iostream>
using namespace std;

class A
{
    public :
    void display()
    {
        cout<<"class a "<<endl;
    }
};

class B : public A 
{
    public :
    void display()
    {
        cout<<"class b"<<endl;
        A::display(); // used to call the function of base class
    }
};


int main()
{

    B obj;
    obj.display(); // function of derived class will be called by default
    obj.A::display(); // used to call the function of base class

return 0;
}