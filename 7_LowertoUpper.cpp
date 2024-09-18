#include<iostream>
using namespace std;
int main()
{
    char letter;
    cout<<"Enter a letter : "<<endl;
    cin>>letter;
    if(islower(letter)){
        letter=toupper(letter);
        cout<<letter;
    }
    else{
        cout<<letter;
    }

    return 0;
}