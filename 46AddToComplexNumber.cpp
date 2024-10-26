// Write a program that adds 2 complex numbers. The object must be passed through prefrence and the result must be passed by value.
#include<iostream>
using namespace std;
class Complex{
    private:
        float real;
        float imag;
    public:
        // Constructor to initialize the comples number
        Complex(float r=0, float i=0):real(r), imag(i){}

        // Function to add two complex numbers (pass by reference)
        Complex add(const Complex &c){
            Complex result;
            result.real = real + c.real;
            result.imag = imag + c.imag;
            return result;  //return by value
        }

        // Function to display the complex number
        void display() const{
            if(imag >= 0){
                cout<<real<<" + "<<imag<<"i"<<endl;
            }else{
                cout<<real<<" - "<<-imag<<"i"<<endl;
            }
        }
};
int main(){
    Complex c1(3.4, 5.7);
    Complex c2(2.1, -4.3);

    // Display the complex numbers
    cout<<"First Complex number: ";
    c1.display();
    cout<<"Second Complex number: ";
    c2.display();

    // Adding two complex numbers using the add function
    Complex result = c1.add(c2);    //Passing by reference and returning by value

    // Dispaly the result
    cout<<"Result of addition: ";
    result.display();
    return 0;
}