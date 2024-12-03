//Write a program that uses an overloaded consturctor to dynamically allocate memory to an array and thus find the largest of its elements.
#include<iostream>
using namespace std;
class Larg_Num_Array{
    private:
        int *arr;
        int size;
    public:
        //Default consturctor
        Larg_Num_Array(){
            size = 0;
            arr = nullptr;
        }
        //Overloaded constructor to allocate memory and input elements
        Larg_Num_Array(int s){
            size = s;
            arr = new int[size];
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        }
        //Method to find the largest element
        int findLargest() const{
            if(size == 0){
                cout<<"Array is empty!"<<endl;
                return -1;      //Return a placeholder value
            }
            int largest = arr[0];
            for(int i=1; i<size; i++){
                if(arr[i] > largest){
                    largest = arr[i];
                }
            }
            return largest;
        }
        //Destructor to free memory
        ~Larg_Num_Array(){
            delete[] arr;
        }
};
int main(){
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    //Create an array using the overloaded constructor
    Larg_Num_Array obj(size);

    //Find and display the largest element
    int largest = obj.findLargest();
    cout<<"The largest element in the array is: "<<largest<<endl;

    return 0;
}