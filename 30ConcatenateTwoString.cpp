//Write a program to concatenate two string

//Using '+' operator for concatenate strings
// #include<iostream>
// using namespace std;
// int main(){
//     string str1, str2, result;

    // //Reading two strings
    // cout<<"Enter the first string: ";
    // getline(cin,str1);          //getline() is used to read the full line of input(in case of spaces).
    // cout<<"Enter the second string: ";
    // getline(cin,str2);

//     //Concatenating using + operator
//     result = str1 + str2;

//     //Display the result
//     cout<<"Concatenated string: "<<result<<endl;
//     return 0;
// }

//Using 'strcat()' function from '<cstring>' library
#include<iostream>
#include<cstring>   //for strcat()
using namespace std;
int main(){
    char str1[100], str2[100];

    //Reading two string
     cout<<"Enter the first string: ";
     cin.getline(str1,100);     //cin.getline() reads the entire string (up to 100 characters).
     cout<<"Enter the second string: ";
     cin.getline(str2,100);

     //Concatenating the two string using 'strcat()' function
     strcat(str1, str2);

     //Display the result
     cout<<"Concatenated string: "<<str1<<endl;

     return 0;
}
