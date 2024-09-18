#include<iostream>
using namespace std;
int main(){
    int num[10];
    cout<<"Enter 10 numbers :"<<endl;
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    int largest=num[0];
    for(int i=1;i<10;++i){
        largest=(num[i]>largest) ? num[i] : largest;
    }
    cout<<"The largest Number is :"<<largest;
    return 0;
}
