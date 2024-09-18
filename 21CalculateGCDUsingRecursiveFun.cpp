#include<iostream>
using namespace std;
//GCD=Greatest common division
int GCD(int a, int b){
    int result=min(a,b);
    while(result>0){
        if(a%result==0 && b%result==0){
            break;
        }
        result--;
    }
    return result;
}
int main(){
    int a,b;
    cout<<"Enter values of a and b :";
    cin>>a>>b;
    cout<<endl<<"GCD of "<<a<<" and "<<b<<" is :"<<GCD(a,b);
    return 0;
}
// #include<iostream>
// using namespace std;
// int GCD(int a, int b){
//     if(b==0){
//         return a;
//     }
//     return GCD(b,a%b);
// }
// int main(){
//     int x,y;
//     cout<<"Enter two numbers : "<<endl;
//     cin>>x>>y;
//     int result=GCD(x,y);
//     cout<<"The GCD is "<<result<<endl;
//     return 0;
// }