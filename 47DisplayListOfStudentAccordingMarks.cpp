// Write a program to display the list of students according to their marks.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Sturcture to represent the student
struct Student{
    string name;
    int marks;
};

// Function to compare two students based on their marks
bool compareMarks(const Student &s1, const Student &s2){
    return s1.marks > s2.marks;     //Sorting in descending order based on marks
}
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    // Vector to store the list of students
    vector<Student> students(n);

    // Input: Name and Marks of the students
    for(int i=0; i<n; i++){
        cout<<"Enter name of Student "<<i+1<<": ";
        cin>>students[i].name;
        cout<<"Enter marks of Student "<<i+1<<": ";
        cin>>students[i].marks;
    }

    // Sorting students by their marks in descending order
    sort(students.begin(), students.end(), compareMarks);

    // Output: Display the list of students sorted by marks
    cout<<endl<<"List of students sorted by marks (highest to lowest):"<<endl;
    for(const auto &student : students){
        cout<<"Name: "<<student.name<<", Marks: "<<student.marks<<endl;
    }
    return 0;
}