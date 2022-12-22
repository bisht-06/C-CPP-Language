//Inline is request to the compiler to make the function inline, 
//it should contain only one line of code, execution is faster.., 
//helps in funtion overhead problem, which maybe time consuming

#include<iostream>
using namespace std;

inline int sum(int x, int y)
{
    return (x+y);
}


int main()
{

cout<<sum(10, 20)<<endl;
cout<<sum(1, 20)<<endl;
cout<<sum(10, 2)<<endl;
cout<<sum(10, 0)<<endl;
cout<<sum(0, 20)<<endl;
cout<<sum(2, 2)<<endl;
cout<<sum(1, 2)<<endl;

return 0;
}