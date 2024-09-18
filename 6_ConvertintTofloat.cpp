#include<iostream>
using namespace std;
int main()
{
    int intValue;
    float floatVlaue;
    cout<<"Enter a integer value :"<<endl;
    cin>>intValue;
    floatVlaue=static_cast<float>(intValue);
    cout<<"Integer value : "<<intValue<<endl;
    cout<<"Float value : "<<floatVlaue;

    return 0;
}