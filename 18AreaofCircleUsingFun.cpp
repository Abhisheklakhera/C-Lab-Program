#include<iostream>
using namespace std;
float area(float r){
    float a=3.1415*r*r;
    return a;
}
int main(){
    float r;
    cout<<"Enter length of radius of circle :";
    cin>>r;
    cout<<"The area of circle : "<<area(r);
    return 0;
}