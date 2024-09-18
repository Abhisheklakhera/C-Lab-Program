#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a value:";
    cin>>n;

    double sum=0.0;
    for(i=1;i<=n;++i)
    {
       sum+=pow(i,i)/static_cast<double>(i);
    }
    cout<<"The sum of series is :"<<sum;
    
    return 0;
}