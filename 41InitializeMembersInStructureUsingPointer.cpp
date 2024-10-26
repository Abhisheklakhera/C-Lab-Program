// Write a program using pointer to structure to initialize the members in the structure.

#include<iostream>
using namespace std;
//Define structure called Person
struct Person{
    string name;
    int age;
    float height;
};

int main(){
    //Declare a structure variable and a pointer to the structure
    Person p1;
    Person *ptr = &p1;

    //Initialize members of the structure using the pointer
    ptr->name = "Abhi";
    ptr->age = 20;
    ptr->height = 5.9;

    //Print the initialized values
    cout<<"Name: "<<ptr->name<<endl;
    cout<<"Age: "<<ptr->age<<endl;
    cout<<"Height: "<<ptr->height<<" ft"<<endl;

    return 0;
}