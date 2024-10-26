//Write a program to add 2 integers using pointer

// #include<iostream>
// using namespace std;
// int main(){
//     int num1, num2, sum;
//     int *ptr1, *ptr2;
//     cout<<"Enter two integer: "<<endl;
//     cin>>num1>>num2;
//     ptr1=&num1;
//     ptr2=&num2;
//     sum=*ptr1+*ptr2;
//     cout<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int num1, num2, sum;
    int *ptr1, *ptr2;

    //Input the two numbers
    cout<<"Enter the 1st number: ";
    cin>>num1;
    cout<<"Enter the 2nd number: ";
    cin>>num2;

    //Assign the addresses of num1 and num2 to ptr1 and ptr2
    ptr1=&num1;
    ptr2=&num2;

    //Perform addition using pointers
    sum=*ptr1+*ptr2;

    //Display the result
    cout<<"Sum of "<<*ptr1<<" and "<<*ptr2<<" is: "<<sum<<endl;

    return 0;
}