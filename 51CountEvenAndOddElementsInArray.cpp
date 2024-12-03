//Write a program that uses dynamic constructor to allocate memory to an array. Count the number of even and odd elements.
#include<iostream>
using namespace std;
class Count_Array{
    private:
        int *arr;
        int size;
    public:
        //Dynamic constructor to allocate memory and input elements
        Count_Array(int s){
            size = s;
            arr = new int[size];
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        }
        //Method to count even and odd elements
        int countEvenOdd(int &evenCount, int &oddCount) const{
            evenCount = 0;
            oddCount = 0;
            for(int i=0; i<size; i++){
                if(arr[i] % 2 == 0){
                    evenCount++;
                }else{
                    oddCount++;
                }
            }
        }
        //Destructor to free memory
        ~Count_Array(){
            delete[] arr;
        }
};
int main(){
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    //Create an array using the dynamic constructor
    Count_Array obj(size);

    //Variable to store counts
    int evenCount, oddCount;

    //Count even and odd elements
    obj.countEvenOdd(evenCount, oddCount);

    //Display the counts
    cout<<"Number of even elements: "<<evenCount<<endl;
    cout<<"Number of odd elements: "<<oddCount<<endl;

    return 0;
}