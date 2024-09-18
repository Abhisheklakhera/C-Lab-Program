#include<iostream>
using namespace std;
int main(){
    int i,num;
    float sum=0,avg;
    cout<<"Enter the value of num :"<<endl;
    cin>>num;
    for(i=1;i<=num;i++){
        sum+=i;
    }
    avg=sum/num;
    cout<<"The average of n natural number is: "<<avg;
    return 0;
}