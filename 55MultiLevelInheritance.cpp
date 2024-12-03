//Write a program that uses multi level inheritance to implement classes-note, server and device.
#include<iostream>
#include<string>
using namespace std;
class Note{
    protected:
        string noteContent;
    public:
        //Constructor to initialize note content
        Note(const string &content=""):noteContent(content){}

        //Fucntion to set note content
        void setNoteContent(const string &content){
            noteContent=content;
        }

        //Function to display the note
        void displayNote()const{
            cout<<"Note Content: "<<noteContent<<endl;
        }
};
class Server:public Note{
    protected:
        string serverName;
    public:
        //Constructor to initialize server and note content
        Server(const string &name="", const string &content=""):Note(content), serverName(name){}

        //Function to set server name
        void setServerName(const string &name){
            serverName=name;
        }

        //Function to display server deteils
        void displayServer()const{
            cout<<"Server Name: "<<serverName<<endl;
            displayNote();      //Call the base class method
        }
};
class Device:public Server{
    private:
        string deviceName;
    public:
        //Constructor to initialize device name, server name, and note content
        Device(const string &device="", const string &server="", const string &content=""):Server(server, content), deviceName(device){}

        //Function to set device name
        void setDeviceName(const string &device){
            deviceName=device;
        }

        //Function to display device details
        void displayDevice()const{
            cout<<"Device Name: "<<deviceName<<endl;
            displayServer();        //Call the base class method
        }
};
int main(){
    Device obj;

    //Set details
    obj.setDeviceName("Smartphone");
    obj.setServerName("MainServer");
    obj.setNoteContent("This device is connect to the server.");

    cout<<"Device Details: "<<endl;
    obj.displayDevice();

    return 0;
}
