// Write a program to fing mean of 2 numbers belonging to two different classes using friend function.
#include<iostream>
using namespace std;
class ClassA;   //Forward declaration of ClassA

class ClassB{
    private:
        int numB;
    public:
        ClassB(int b):numB(b){}
        // Declare friend function to access private members of ClassB
        friend float findMean(const ClassA &a, const ClassB &b);
};
class ClassA{
    private:
        int numA;
    public:
        ClassA(int b):numA(b){}
        // Declare friend function to access private members of ClassA
        friend float findMean(const ClassA &a, const ClassB &b);
};

// Friend function to calculate the mean of two numbers from different classes
float findMean(const ClassA &a, const ClassB &b){
    return (a.numA + b.numB) / 2;
}
int main(){
    int a,b;
    cout<<"Enter a number for ClassA: ";
    cin>>a;
    cout<<"Enter a number for ClassB: ";
    cin>>b;

    ClassA objA(a);
    ClassB objB(b);

    cout<<"Mean of the two numbers: "<<findMean(objA, objB)<<endl;
    return 0;
}