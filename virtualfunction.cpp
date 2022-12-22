#include<iostream>
using namespace std;

class base
{
    public :
    virtual void disp()
    {
        cout<<"base class"<<endl;
    }
};

class derived : public base
{
    public :
    void disp()
    {
        cout<<"derived class"<<endl;
    }
};


int main()
{

base *ptr;
base obj;
derived obj2;

ptr = &obj2;

ptr->disp();

return 0;
}