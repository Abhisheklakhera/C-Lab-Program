//Write a program to read and display a 2*2*2 array.
#include<iostream>
using namespace std;
int main(){
    int arr[2][2][2];           //3D array declaration
    //Reading values for the 2*2*2 array
    cout<<"Enter 8 elements for the 2*2*2 array: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<"Element at ["<<i<<"]["<<j<<"]["<<k<<"]: ";
                cin>>arr[i][j][k];
            }
        }
    }

    //display the 2*2*2 array
    cout<<endl<<"The 2*2*2 array elements are: "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<"Element at ["<<i<<"]["<<j<<"]["<<k<<"]: "<<arr[i][j][k]<<endl;
            }
        }
    }

    return 0;
}