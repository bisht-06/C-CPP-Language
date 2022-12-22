#include<iostream>
using namespace std;

class sample
{
    static int count;
    public :
    void disp();
    static void dispcount();
};

int sample :: count;

void sample :: disp()
{
    cout<<"Hello"<<endl;
    count++;
}

void sample :: dispcount()
{
    cout<<"Current count value is : "<<count<<endl;
}


int main()
{

    sample s1, s2, s3;
    s1.disp();
    s2.disp();
    s3.disp();
    s2.disp();
    s2.disp();
    s2.disp();
    s1.dispcount();

return 0;
}