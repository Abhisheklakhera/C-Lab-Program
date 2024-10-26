//Write a program to insert a string in the main text

#include<iostream>
#include<string>
using namespace std;
int main(){
    string mainText, toInsert;
    int position;

    //Input the main text
    cout<<"Enter the main text: ";
    getline(cin, mainText);

    //Input the string to insert
    cout<<"Enter the string to insert: ";
    getline(cin, toInsert);

    //Input the position where the string should be inserted
    cout<<"Enter the position where you want to insert the string: ";
    cin>>position;

    //Check if the position is valid
    if(position < 0 || position > mainText.length()){
        cout<<"Invalid position!"<<endl;
    }
    else{
        //Insert the string at the given position
        mainText.insert(position, toInsert);

        //Display the new main text
        cout<<"Resulting text after insertion: "<<mainText<<endl;
    }
    return 0;
}