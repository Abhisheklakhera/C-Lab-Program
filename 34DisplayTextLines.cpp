// Write a program to enter a text that contains multiple lines. Display the a lines of test starting from m" line.

#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int m, totalLines;
    string line;
    vector<string> lines;       //vector<string> to store each line of input

    //Input the total number of lines
    cout<<"Enter the total number of lines: ";
    cin>>totalLines;

    //Clear the input buffer after reading integer
    cin.ignore();

    //Input the text line by line
    cout<<"Enter the text (one line at a time):"<<endl;
    for(int i=0; i<totalLines; i++){
        getline(cin, line);     //getline() function is used to capture multi-word lines.
        lines.push_back(line);
    }

    //Input the starting line number(m)
    cout<<"Enter the starting line number (m): ";
    cin>>m;

    //Display the lines starting from the mth line
    if(m<=totalLines && m>0){
        for(int i=m-1; i<totalLines; i++){
            cout<<lines[i]<<endl;
        }
    }
    else{
        cout<<"Invalid starting line number."<<endl;
    }

    return 0;
}
