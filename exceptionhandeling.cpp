#include<iostream>
using namespace std;


int main()
{

int a, b, c;

cout<<"enter values of a and b : "<<endl;
cin>>a>>b;

c = a-b;
try{
    if(c!=0)
    {
        cout<<" value of c is : "<<a/(a-b)<<endl;
    }
    else{
        throw c;
    }
}
catch(int i)
{
    cout<<"division by zero error"<<endl;
}

return 0;
}