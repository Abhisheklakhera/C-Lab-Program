#include<iostream>
using namespace std;
//Overloaded functions for adding different data types
int add(int a, int b){
    return a+b;
}
int add(char a, char b){
    return a+b;
}
int add(bool a, bool b){
    return a+b;
}
int add(int a, char b){
    return a+b;
}
int add(int a, char b, bool c){
    return a+b+c;
}
int main(){
    int a=5, b=10;
    char c='c', d='d';
    bool t=true, f=false; 
    cout<<"Adding two numbers: "<<add(a,b)<<endl;
    cout<<"Adding two characters: "<<add(c,d)<<endl;
    cout<<"Adding two booleans: "<<add(t,f)<<endl;
    cout<<"Adding one int & one char: "<<add(b,c)<<endl;
    cout<<"Adding one int, one char & one bool: "<<add(a,c,t)<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int b=10;
//     char c='c';
//     char d='d';
//     bool t=true;
//     bool f=false;

//     cout << " Adding two numbers: " << (a+b) << endl;

//     cout << "Adding two characters: " << (c+d) << endl;

//     cout << "Adding two boolean: " <<(t + f)<<endl;

//     cout << " Adding one int & one char: "<<(b + c) << endl;

//     cout << "Adding one int, one char & one bool"<<(a + c + t) << endl;

//     return 0;
// }

