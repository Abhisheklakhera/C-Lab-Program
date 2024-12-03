//Write a program to find the next date using unary increment operator.
#include<iostream>
using namespace std;
//Class to represent a date
class Date{
    private:
        int day, month, year;
        //Function to check if a year is a leap year
        bool isLeapYear(int y){
            return (y%4 == 0 && y%100 != 0) || (y%400 == 0);
        }
        //Function to get the number of days in a month
        int daysInMonth(int m, int y){
            if(m == 2)      //February
                return isLeapYear(y) ? 29 : 28;
            else if(m == 4 || m == 6 || m == 9 || m == 11)      //April, June, September, November
                return 30;
            else
                return 31;      //Other months
        }
    public:
        //Constructor to initialize the date
        Date(int d, int m, int y){
            day = d;
            month = m;
            year = y;
        }
        //Overloaded increment operator to find the next date
        Date &operator++(){
            day++;
            if(day > daysInMonth(month, year)){
                day = 1;
                month++;
                if(month > 12){
                    month = 1;
                    year++;
                }
            }
            return *this;
        }
        //Function to display the date
        void display() const{
            cout<<(day < 10 ? "0" : " ")<<day<<"/"
                <<(month < 10 ? "0" : " ")<<month<<"/"
                <<year<<endl;
        }
};
int main(){
    int day, month, year;
    //Input the current date
    cout<<"Enter the date (DD MM YYYY): ";
    cin>>day>>month>>year;

    //Create a Date Object
    Date obj(day, month, year);
    
    cout<<"Current Date: ";
    obj.display();

    //Increment the date
    ++obj;

    cout<<"Next Date: ";
    obj.display();

    return 0;
}