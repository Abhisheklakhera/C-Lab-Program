#include<iostream>
using namespace std;
int power(int x,int n){
    //if x^0 return 1
    if(n==0){
        return 1;
    }
    //if 0^y return 0 
    else if(x==0){
        return 0;
    }
    //for other cases
    else{
        return (x*power(x,n-1));
    }
}
int main(){
    int base,pow;
    cout<<"Enter values of base and power :";
    cin>>base>>pow;
    int result=power(base,pow);
    cout<<"Answer = "<<result;
    return 0;
}