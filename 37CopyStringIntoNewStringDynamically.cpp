//Write a prorgram to copy a given string into a new string. Memory for the new string must be allocated dynamically.

#include<iostream>
#include<cstring>       //for strlen() and strcpy()
using namespace std;
int main(){
    const char* originalString = "Hello, world!";

    //Allocate memory for the new String
    //Add 1 to the length for the null terminator
    char* copiedString = new char[strlen(originalString) + 1];

    //Copy the original string into the newly allocated memory
    strcpy(copiedString, originalString);

    cout<<"Copied String: "<<copiedString<<endl;

    //Free the dynamically allocated memory
    delete[] copiedString;

    return 0;
}