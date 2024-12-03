//Write a program to add 2 arrays using friend function and operator overloading.
#include<iostream>
using namespace std;
class Sum_Array{
    private:
        int *arr;   //Pointer to the array
        int size;   //Size of the array
    public:
    //Constructor to initialize the array
        Sum_Array(int s){
            size = s;
            arr = new int[size];
        }
        //Destructor to free memory
        ~Sum_Array(){
            delete[] arr;
        }
        //Function to input elements in the array
        void input(){
            cout<<"Enter "<<size<<" elements: ";
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        }
        //Function to display elements of the array
        void display() const{
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        //Friend function to overload the '+' operator for array addition
        friend Sum_Array operator+(const Sum_Array &a1, const Sum_Array &a2);
};
//Overload '+' operator to add two arrays
Sum_Array operator+(const Sum_Array &a1, const Sum_Array &a2){
    //Assuming both arrays have the same size
    Sum_Array result(a1.size);
    for(int i=0; i<a1.size; i++){
        result.arr[i] = a1.arr[i] + a2.arr[i];
    }
    return result;
}
int main(){
    int size;
    cout<<"Enter the size of the arrays: ";
    cin>>size;

    Sum_Array arr1(size);
    Sum_Array arr2(size);

    cout<<"Input for first array: "<<endl;
    arr1.input();
    cout<<"Input for second array: "<<endl;
    arr2.input();

    //Add the two arrays using the overloaded '+' operator
    Sum_Array result=arr1+arr2;

    cout<<"Resultant array after addition: "<<endl;
    result.display();
    return 0;
}