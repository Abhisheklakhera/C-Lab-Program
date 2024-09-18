#include<iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of random numbers : ";
    cin>>n;
    int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++){
        arr[i]=rand()%100;
    }
    cout<<"Random numbers :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}