#include<iostream>
using namespace std;
void changeMinMax(int arr[], int n){
    int minIndex=0, maxIndex=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[maxIndex]){
            maxIndex=i;
        }
        if(arr[i]<arr[minIndex]){
            minIndex=i;
        }
    }
    int temp=arr[maxIndex];
    arr[maxIndex]=arr[minIndex];
    arr[minIndex]=temp;
}
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={3,6,2,34,22,45,75,23,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Orignal Array :"<<endl;
    display(arr,size);
    changeMinMax(arr,size);
    cout<<"After swapping max and min number array is :"<<endl;
    display(arr,size);
    return 0;
}