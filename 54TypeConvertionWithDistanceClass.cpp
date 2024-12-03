//Write a program to demonstrate the use of type conversions with distance class.
#include<iostream>
using namespace std;
class Distance{
    private:
        int meters;
        int centimeters;
    public:
        //Constructor to initialize Distance object
        Distance(int m, int cm):meters(m), centimeters(cm){}

        //Default consturctor
        Distance():meters(0), centimeters(0){}

        //Fuction to display the distance
        void display()const{
            cout<<meters<<" meters and "<<centimeters<<" centimeters"<<endl;
        }

        //Conversion operator to convert Distance to int(total centimeters)
        operator int()const{
            return (meters * 100) + centimeters;
        }

        //Constructor to convert an integer(total centimeters) to Distance
        explicit Distance(int totalCentimeters){
            meters = totalCentimeters / 100;
            centimeters = totalCentimeters % 100;
        }
};
int main(){
    Distance obj1(5, 75);
    cout<<"Initial Distance: ";
    obj1.display();

    //Convert Distance object to an int (total centimeters)
    int totalCentimeters = obj1;
    cout<<"Distance in total centimeters: "<<totalCentimeters<<" cm"<<endl;

    //Convert an integer (total centimeters) back to Distance
    Distance obj2(totalCentimeters + 125);   //Adding 125 cm
    cout<<"Converted Distance: ";
    obj2.display();

    return 0;
}