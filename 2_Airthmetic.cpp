#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul;
    float div;
    cout<<"Enter 2 integer number:"<<endl;
    cin>>a>>b;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    cout<<"Addition = "<<sum<<endl;
    cout<<"Subtraction = "<<sub<<endl;
    cout<<"Multiplication = "<<mul<<endl;
    cout<<"Division = "<<div;
    return 0;
}