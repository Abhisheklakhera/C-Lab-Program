//Write a program to read and display information of all the students in the class.

#include<iostream>
#include<vector>
using namespace std;
class Student{
    private:
        string name;
        int rollNo;
        string address;
    public:
        //Function to input student information
        void input(){
            cout<<"Enter student's name: ";
            getline(cin, name);
            cout<<"Enter student's roll number: ";
            cin>>rollNo;
            cin.ignore();   //To ignore the newline character left in the buffer
            cout<<"Enter student's address: ";
            getline(cin, address);
        }

        //Function to display student information
        void display() const{
            cout<<endl<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNo<<endl;
            cout<<"Address: "<<address<<endl;
        }
};
//Class to represent a class of students
class Class{
    private:
        vector<Student> students;   //Vector to store a list of students
    public:
        //Function to input details of all students
        void inputAllStudents(int numStudents){
            students.resize(numStudents);   //Resize vector to hold the correct number of students

            for(int i=0; i<numStudents; i++){
                cout<<endl<<"Enter details for student "<<i+1<<": "<<endl;
                students[i].input();    //Call the input function for each student
            }
        }

        //Function to display details of all students
        void displayAllStudents() const{
            cout<<endl<<"Displaying student information:"<<endl;
            for(int i=0; i<students.size(); i++){
                cout<<endl<<"Details of student "<<i+1<<":"<<endl;
                students[i].display();  //Call the display function for each student
            }
        }
};

int main(){
    int numStudents;
    Class obj;

    cout<<"Enter the number of students in the Class: ";
    cin>>numStudents;
    cin.ignore();       //To ignore the newline character left in the buffer

    //Input and store details of all students
    obj.inputAllStudents(numStudents);

    //Display details of all students
    obj.displayAllStudents();

    return 0;
}