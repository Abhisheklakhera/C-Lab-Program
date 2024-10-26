// Write a program to illustrate the use of arrays in the structure.
#include<iostream>
using namespace std;
struct Student{
    string name;
    int marks[5];   //array to store marks of 5 subjects
};
int main(){
    //Declare an array of structures
    Student students[2];    //Two students

    //Input details for each student
    for(int i=0; i<2; i++){
        cout<<"Enter the name of student "<<i+1<<": ";
        cin>>students[i].name;

        cout<<"Enter marks of 5 subjects:"<<endl;
        for(int j=0; j<5; j++){
            cout<<"Subject "<<j+1<<": ";
            cin>>students[i].marks[j];
        }
    }

    //Output the details of each student
    cout<<endl<<"---Student Details ---"<<endl;
    for(int i=0; i<2; i++){
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Marks: ";
        for(int j=0; j<5; j++){
            cout<<students[i].marks[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}