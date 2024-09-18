#include<iostream>
#include<iomanip>
using namespace std;
void calendar(int startday, int numdays){
    cout<<" Sun Mon Tue Wed Thu Fri Sat"<<endl;
    for(int i=0;i<startday;i++){
        cout<<"    ";
    }
    for(int i=1;i<=numdays;i++){
        cout<<setw(4)<<i;
        if((i+startday) % 7 == 0){
            cout<<endl;
        }
    }
    if((numdays+startday) % 7 != 0){
        cout<<endl;
    }
}
int main(){
    int startday,numdays;
    cout<<"Enter the start day of the month (0=Sunday, 1=Monday,.......,6=Saturday): ";
    cin>>startday;
    cout<<"Enter the number of days in the month :";
    cin>>numdays;
    calendar(startday,numdays);
    return 0;
}
 