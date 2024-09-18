#include<iostream>
using namespace std;
float VolumeCuboid(float l=10, float b=15, float h=5){
    float v=l*b*h;
    return v;
}
int main(){
    cout<<"Volume of Cuboid is : "<<VolumeCuboid(20)<<endl;
    cout<<"Volume of Cuboid is : "<<VolumeCuboid(20,12)<<endl;
    cout<<"Volume of Cuboid is : "<<VolumeCuboid(20,12,8);
    return 0;
}