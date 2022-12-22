#include<iostream>
using namespace std;

int main()
{

int a, fac = 1;
cout<<"enter a number to find factorial : "<<endl;
cin>>a;

try
{
    if(a>0)
    {
        for(int i=1;i<=a; i++)
    {
        fac = fac*i;
    }

    cout<<"factorial of "<<a<<" is : "<<fac<<endl;
    }
    else
    {
        throw(a);
    }
}
catch(int x)
{
    cout<<"enter a number greater than zero"<<endl;
}



return 0;
}