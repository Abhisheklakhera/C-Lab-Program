#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter 2 number"<<endl;
    cin>>a>>b;
    cout<<"Number before swapping : "<<a<<endl<<b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Number after swapping : "<<a<<endl<<b;
    return 0;
}