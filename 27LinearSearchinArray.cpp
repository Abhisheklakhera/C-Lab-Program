#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int traget){
    for(int i=0; i<size; i++){
        if(arr[i]==traget){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={10,23,45,70,11,15};
    int size=sizeof(arr)/sizeof(arr[0]);
    int traget=70;

    int result=linearSearch(arr,size,traget);

    if(result != -1){
        cout<<"Element found at index : "<<result<<endl;
    }
    else{
        cout<<"Element not found in the array.";
    }
    return 0;
}