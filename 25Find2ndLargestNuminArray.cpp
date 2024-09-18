#include<iostream>
using namespace std;
int SecondLargeNum(int arr[],int num){
    int firstLargest=0, SecondLargest=0;
    for(int i=1;i<num;i++){
        if(arr[i]>firstLargest){
            SecondLargest=firstLargest;
            firstLargest=arr[i];
        }
        else if(arr[i]>SecondLargest && arr[i] != firstLargest){
            SecondLargest=arr[i];
        }
    }
    return SecondLargest;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=SecondLargeNum(arr,n);
    if(result==0){
        cout<<"There is no second largest element."<<endl;
    }
    else{
        cout<<"The second largest number is: "<<result<<endl;
    }
    return 0;
}