#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter a number";
    cin>>n;

    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<(char)('A'+j-1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}