// Write a program to display the name of the colors using enumerated types.
#include<iostream>
using namespace std;
// Define an enumerated type for colors
enum Colors{
    Red,Green,Blue,Yellow,Orange
};
int main(){
    // Declare a variable of enum type Colors
    Colors color;
    // Assign a value to the enum variable
    color = Green;

    // Display the color based on the enum value
    switch(color){
        case Red:
            cout<<"The color is Red"<<endl;
            break;
        case Green:
            cout<<"The color is Green"<<endl;
            break;
        case Blue:
            cout<<"The color is Blue"<<endl;
            break;
        case Yellow:
            cout<<"The color is Yellow"<<endl;
            break;
        case Orange:
            cout<<"The color is Orange"<<endl;
            break;
        default:
            cout<<"Unknown color"<<endl;
    }

    return 0;
}