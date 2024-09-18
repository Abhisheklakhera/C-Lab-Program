#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a1,a2,b1,b2,dis;
    cout<<"Enter value of a1,a2,b1,and b2";
    cin>>a1>>a2>>b1>>b2;
    // cin>>a2;
    // cin>>b1;
    // cin>>b2;
    dis=sqrt(pow((a1-a2),2)+pow((b1-b2),2));
    cout<<"Distance ="<<dis;
    return 0;
}