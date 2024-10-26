// Write a program to demonstrate the concept function overloading in the member functions of a class.
#include<iostream>
using namespace std;
class Calculator{
    public:
        // Overloaded function to add two integers
        int add(int a, int b){
            return a+b;
        }
        // Overloaded function to add three intergers
        int add(int a, int b, int c){
            return a+b+c;
        }
        // Overloaded function to add two double numbers
        double add(double a, double b){
            return a+b;
        }
};
int main(){
    Calculator calc;

    // double x, y, z;
    // cout<<"Enter the 3 numbers: "<<endl;
    // cin>>x>>y>>z;
    
    // // Calling the add function with different parameters
    // cout<<"Addition of two integers: "<<calc.add(x,y)<<endl;
    // cout<<"Addition of three integers: "<<calc.add(x,y,z)<<endl;
    // cout<<"Addition of two doubles: "<<calc.add(y,z)<<endl;

    // Calling the add function with different parameters
    cout<<"Addition of two integers (3 + 5): "<<calc.add(3,5)<<endl;
    cout<<"Addition of three integers (3 + 5 + 7): "<<calc.add(3,5,7)<<endl;
    cout<<"Addition of two doubles (3.5 + 5.2): "<<calc.add(3.5,5.2)<<endl;

    return 0;
}