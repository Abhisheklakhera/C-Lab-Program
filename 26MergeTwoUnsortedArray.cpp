#include<iostream>
using namespace std;
void mergeArray(int arr1[], int size1, int arr2[], int size2, int result[]){
    for(int i=0; i<size1; i++){
        result[i]=arr1[i];
    }
    for(int i=0; i<size2; i++){
        result[size1+i]=arr2[i];
    }
}
void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size1, size2;
    cout<<"Enter the size of the 1st array : ";
    cin>>size1;
    int arr1[size1];
    cout<<"Enter elements of the 1st array : ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of the 2nd array : ";
    cin>>size2;
    int arr2[size2];
    cout<<"Enter elements of the 2nd array : ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }

    int result[size1+size2];
    mergeArray(arr1, size1, arr2, size2, result);
    cout<<"Merged array : "<<endl;
    displayArray(result, size1+size2);

    return 0;
}