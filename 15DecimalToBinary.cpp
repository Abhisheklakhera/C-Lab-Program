#include<iostream>
using namespace std;
void decToBinary(int n){
    int binaryNum[32];
    int i,j;
    for(i=0;n>0;i++){
        binaryNum[i] = n % 2;
        n = n/2;
    }
    cout<<"The binary number is :";
    for(j=i-1;j>=0;j--){
        cout<<binaryNum[j];
    }
}
int main(){
    int n;
    cout<<"Enter a decimal number :"<<endl;
    cin>>n;
    decToBinary(n);
    return 0;
}