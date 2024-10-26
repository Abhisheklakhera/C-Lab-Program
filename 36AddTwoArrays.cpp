// write a program to add 2 vector(arrays).

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the vectors: ";
    cin>>n;
    int vector1[n], vector2[n], sum[n];
    
    cout<<"Enter elements of the first vector: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Element "<<i+1<<": ";
        cin>>vector1[i];
    }

    cout<<"Enter elements of the second vector: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"Element "<<i+1<<": ";
        cin>>vector2[i];
    }

    //adding the two vectors elements-wise
    for(int i=0; i<n; i++){
        sum[i]=vector1[i]+vector2[i];
    }

    //display the result
    cout<<"Sum of the two vectors: "<<endl;
    for(int i=0; i<n; i++){
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    return 0;
}