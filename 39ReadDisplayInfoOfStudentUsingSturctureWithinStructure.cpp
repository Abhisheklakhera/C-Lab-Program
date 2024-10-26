//Write a program to read and display information of a student using structure within a structure.
#include<iostream>
using namespace std;
//Structure for Address
struct Address{
    string street;
    string city;
    string state;
    int zip;
};
//Structure for Student
struct Student{
    string name;
    int rollNo;
    Address address;    //Structure within structure
};
int main(){
    //Declare a Student variable
    Student student;

    //Input student information
    cout<<"Enter student's name: ";
    getline(cin, student.name);
    
    cout<<"Enter student's roll number: ";
    cin>>student.rollNo;

    //Input address information
    cout<<"Enter street: ";
    cin.ignore();   //To clear the newline character left in the input buffer
    getline(cin, student.address.street);

    cout<<"Enter city: ";
    getline(cin, student.address.city);

    cout<<"Enter state: ";
    getline(cin, student.address.state);

    cout<<"Enter ZIP code: ";
    cin>>student.address.zip;

    //Display student information
    cout<<endl<<"Student Information: "<<endl;
    cout<<"Name: "<<student.name<<endl;
    cout<<"Roll Number: "<<student.rollNo<<endl;
    cout<<"Address: "<<student.address.street<<", "
        <<student.address.city<<", "
        <<student.address.state<<", "
        <<student.address.zip<<endl;
    
    return 0;
}
