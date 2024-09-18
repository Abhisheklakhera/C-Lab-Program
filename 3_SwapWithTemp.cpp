#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter 2 number"<<endl;
    cin>>a>>b;
    cout<<"Number before swapping : "<<a<<endl<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Number after swapping : "<<a<<endl<<b;
    return 0;
}