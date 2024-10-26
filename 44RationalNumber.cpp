// Write a program to enter a rational number, simplify and display it.
#include<iostream>
using namespace std;

// Fuction to calculate the greatest common divisor (GCD)
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

// Structure to represent a rational number
struct Rational{
    int numerator;
    int denominator;

    // Function to simplify thr rational number
    void simplify(){
        int divisor = gcd(numerator, denominator);
        numerator /= divisor;
        denominator /= divisor;

        // Ensur the denominator is positive
        if(denominator < 0){
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    // Function to display the rational number
    void display() const{
        if(denominator == 1){
            cout<<numerator<<endl;
        }else{
            cout<<numerator<<"/"<<denominator<<endl;
        }
    }
};
int main(){
    Rational r;

    // Input the rational number
    cout<<"Enter the numerator: ";
    cin>>r.numerator;
    cout<<"Enter the denominator: ";
    cin>>r.denominator;

    // Check for zero denominator
    if(r.denominator == 0){
        cout<<"Error: Denominator cannot be zero."<<endl;
        return 1;
    }

    // Simplify and display the rational number
    r.simplify();
    cout<<"The simplified rational number is: ";
    r.display();

    return 0;
}