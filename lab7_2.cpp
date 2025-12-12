#include<iostream>
using namespace std;
#include<string>


int main(){
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name <<  " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    string ID;
    cout << name << ": ";
    cin >> ID; 
    cin.ignore();
    int gear = ((ID[0])-48)*10 +(ID[1])-48;
    cout << "Fahsai: I think you may be GEAR " << gear-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    string movie;
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string days;
    cout << name << ": ";
    getline(cin,days);
  
    cout << "Fahsai: "<< days << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    string last_mess;
    cout << name << ": ";
    cin >> last_mess;
    cout << "Fahsai: 555+ see you "<< days << ". Bye Bye \\(^ ^)/\n";





}