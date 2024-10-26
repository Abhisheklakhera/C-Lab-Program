//Write a program to read, display, add, and subtract 2 complex number.

#include<iostream>
using namespace std;
class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0, double i=0):real(r), imag(i){}
        //function to input complex number
        void input(){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imag;
        }
        //function to display complex number
        void display(){
            if(imag >= 0){
                cout<<real<<" + "<<imag<<"i"<<endl;
            }else{
                cout<<real<<" - "<<-imag<<"i"<<endl;
            }
        }
        //function to add two complex numbers
        Complex add(const Complex& other)const{
            return Complex(real+other.real, imag+other.imag);
        }
        //function to subtract two complex numbers
        Complex subtract(const Complex& other)const{
            return Complex(real-other.real, imag-other.imag);
        }
};
int main(){
    Complex num1, num2, result;
    cout<<"Enter values for the 1st complex number: "<<endl;
    num1.input();
    cout<<"Enter values for the 2nd complex number: "<<endl;
    num2.input();

    //Display the entered complex numbers
    cout<<"First Complex Number: ";
    num1.display();
    cout<<"Second Complex Number: ";
    num2.display();

    //Adding the two complex numbers
    result = num1.add(num2);
    cout<<endl<<"Addition of the two complex numbers: ";
    result.display();

    //Subtracting the two complex numbers
    result = num1.subtract(num2);
    cout<<endl<<"Subtraction of the two complex numbers: ";
    result.display();

    return 0;
}