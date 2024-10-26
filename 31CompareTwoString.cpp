//Write a progam to compare two string

//Using C++ string class(== operator)
// #include<iostream>
// using namespace std;
// int main(){
//     string str1, str2;
//     //Reading two strings
//     cout<<"Enter the first string: ";
//     getline(cin,str1);          //getline() is used to read the full line of input(in case of spaces).
//     cout<<"Enter the second string: ";
//     getline(cin,str2);

//     //Comparing the two strings using == operator
//     if(str1 == str2){
//         cout<<"The two strings are equal."<<endl;
//     }
//     else{
//         cout<<"The two strings are not equal."<<endl;
//     }
//     return 0;
// }

//Using 'strcmp()' function from '<cstring>' library
#include<iostream>
#include<cstring>   //for strcmp()
using namespace std;
int main(){
    char str1[100], str2[100];

    //Reading two string
     cout<<"Enter the first string: ";
     cin.getline(str1,100);     //cin.getline() reads the entire string (up to 100 characters).
     cout<<"Enter the second string: ";
     cin.getline(str2,100);

     //Comparing the two string using 'strcmp()' function
     if(strcmp(str1, str2) == 0){
        cout<<"The two strings are equal."<<endl;
    }
    else{
        cout<<"The two strings are not equal."<<endl;
    }

     return 0;
}