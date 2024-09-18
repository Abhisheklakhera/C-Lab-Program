#include<iostream>
using namespace std;
int main()
{
    int num,i,x=0;
    cout<<"Enter a number";
    cin>>num;
    for(i=2;i<num;i++){
        if(num%i==0){
            x++;
            break;
        }
    }
    if(x==0 && num!=1)
    {
        cout<<num<<" is Prime number";
    }
    else{
        cout<<num<<" is Composite number";
    }
    return 0;
}