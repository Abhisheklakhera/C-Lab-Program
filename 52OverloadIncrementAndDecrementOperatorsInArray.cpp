//Write a program to overload the increament and decrement operators on the array class.
#include<iostream>
using namespace std;
class Increment_Decrement_Array{
    private:
        int *arr;
        int size;
    public:
        //Constructor to allocate memory and initialize the array
        Increment_Decrement_Array(int s){
            size = s;
            arr = new int[size];
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        }
        //Overloaded prefix increment operator (++Increment_Decrement_Array)
        Increment_Decrement_Array &operator++(){
            for(int i=0; i<size; i++){
                arr[i]++;
            }
            return *this;
        }
        //Overloaded prefix decrement operator (--Increment_Decrement_Array)
        Increment_Decrement_Array &operator--(){
            for(int i=0; i<size; i++){
                arr[i]--;
            }
            return *this;
        }
        //Method to display the array elements
        void dispaly()const{
            cout<<"Array: ";
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        //Destructor to free allocated memory
        ~Increment_Decrement_Array(){
            delete[] arr;
        }
};
int main(){
    int size;

    cout<<"Enter the size of the array: ";
    cin>>size;

    Increment_Decrement_Array obj(size);

    //Display the original array
    cout<<"Original ";
    obj.dispaly();

    //Increment all elements using the overloaded ++ operator
    ++obj;
    cout<<"After incrementing all elements ";
    obj.dispaly();

    //Decrement all elements using the overloaded -- operator
    --obj;
    cout<<"After decrementing all elements ";
    obj.dispaly();

    return 0;
}