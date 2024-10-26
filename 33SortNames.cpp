//Write a program to sort names of students in c++


#include<iostream>
using namespace std;
int main(){
    string str[5], temp;
    cout<<"Enter 5 Names: "<<endl;
    for(int i=0; i<5; i++){
        cin>>str[i];
    }
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(str[i] > str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    cout<<"The sorted Names are: "<<endl;
    for(int i=0; i<5; i++){
        cout<<str[i]<<endl;
    }
    return 0;
}