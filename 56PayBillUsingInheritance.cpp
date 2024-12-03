//Write a program with class bill. The users have the option to pay the bill either by cheque or by cash . Use the inheritance to model this situation.
#include<iostream>
#include<string>
using namespace std;
class Bill{
    protected:
        string customerName;
        double amount;
    public:
        //Constructor to initialize bill details
        Bill(string name, double amt):customerName(name), amount(amt){}

        //Virtual function for payment 
        virtual void payBill()=0;   //Pure virtual function to make the class abstract

        //Function to display bill details
        void displayBillDetails()const{
            cout<<"Customer Name: "<<customerName<<endl;
            cout<<"Bill Amount: "<<amount<<endl;
        }

        virtual ~Bill(){}   //Virtual destructor
};
class Cash:public Bill{
    public:
        Cash(string name, double amt):Bill(name, amt){}

        //Overriding payBill method for cash payment
        void payBill() override{
            cout<<"Payment Method: Cash"<<endl;
            cout<<"Payment successful for $"<<amount<<" by cash."<<endl;
        }
};
class Cheque:public Bill{
    private:
        string chequeNumber;
    public:
        Cheque(string name, double amt, string chqNo):Bill(name, amt), chequeNumber(chqNo){}

        //Overriding payBill method for cheque payment
        void payBill() override{
            cout<<"Payment Method: Cheque"<<endl;
            cout<<"Cheque Number: "<<chequeNumber<<endl;
            cout<<"Payment successful for $"<<amount<<" by cheque."<<endl;
        }
};
int main(){
    string customerName;
    double amount;
    int paymentOption;

    cout<<"Enter Customer Name: ";
    getline(cin, customerName);

    cout<<"Enter Bill Amount: $";
    cin>>amount;

    cout<<"Choose Payment Method: "<<endl;
    cout<<"1. Cash"<<endl;
    cout<<"2. Cheque"<<endl;
    cout<<"Enter your choice (1/2): ";
    cin>>paymentOption;

    if(paymentOption == 1){
        Cash cashPayment(customerName, amount);
        cashPayment.displayBillDetails();
        cashPayment.payBill();
    }else if(paymentOption == 2){
        string chequeNumber;
        cout<<"Enter Cheque Number: ";
        cin>>chequeNumber;

        Cheque chequePayment(customerName, amount, chequeNumber);
        chequePayment.displayBillDetails();
        chequePayment.payBill();
    }else{
        cout<<"Invalid payment option!"<<endl;
    }

    return 0;
}
