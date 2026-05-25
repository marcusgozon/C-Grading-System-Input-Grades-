#include <iostream>
#include <windows.h>
using namespace std;

int main() {

    // text colort codes
    string reset   = "\033[0m";
    string yellow  = "\033[33m";
    string green   = "\033[32m";
    string red     = "\033[31m";

    //variables
    string name;
    string studentID;
    int OLCC02, OLIMFBDS, OLFIL02, OLPHYE003, OLSS02, OLVAL02;
    int sum = 0;
    int average;

    //pang pagana ng text art :>
    SetConsoleOutputCP(CP_UTF8);
    string txtart = R"( 
            █▀▀ █▀█ ▄▀█ █▀▄ █ █▄░█ █▀▀ 
            █▄█ █▀▄ █▀█ █▄▀ █ █░▀█ █▄█  )";
         
     string txtartb = R"( 
             █▀ █▄█ █▀ ▀█▀ █▀▀ █▀▄▀█
             ▄█ ░█░ ▄█ ░█░ ██▄ █░▀░█ )";       

    //print text art
    cout << yellow << "--------------------------------------------------" << reset << endl;
    cout << yellow << txtart << reset << endl;
    cout << yellow << txtartb << reset << endl;
    cout << yellow << "--------------------------------------------------" << reset << endl;

    //input user name
    cout << yellow <<"Enter Full Name: "<< reset;
    getline(cin, name);
    cout << yellow <<"Enter Student ID: "<< reset;
    getline(cin, studentID);

    //input user grade
    cout << yellow <<"Enter your grade in OLCC02: "<< reset;
    cin >> OLCC02;
    cout << yellow <<"Enter your grade in OLIMFBDS: "<< reset;
    cin >> OLIMFBDS;
    cout << yellow <<"Enter your grade in OLFIL-02: "<< reset;
    cin >> OLFIL02;
    cout << yellow <<"Enter your grade in OLPHYE003: "<< reset;
    cin >> OLPHYE003;
    cout << yellow <<"Enter your grade in OLSS02: "<< reset;
    cin >> OLSS02;
    cout << yellow <<"Enter your grade in OLVAL02: "<< reset;
    cin >> OLVAL02;

    //average computation
    sum = OLCC02 + OLIMFBDS + OLFIL02 + OLPHYE003 + OLSS02 + OLVAL02;
    average = sum / 6;

    
    
    //final output
    cout << yellow << "----------------------------------------------" << reset << endl;
    cout << yellow << "         Grade Computation" << reset << endl;
    cout << yellow << "----------------------------------------------" << reset << endl;
    cout << yellow << "Student Name: " << reset << name << endl;
    cout << yellow << "Student ID: " << reset << studentID << endl;
    cout << yellow << "Average: " << reset << average << endl;
    
    
    
    if (average >=96.50){
        cout << yellow << "GWA: " << reset <<"1.00" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    }  else if (average >=93.50)    {
        cout << yellow << "GWA: " << reset <<"1.25" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    } else if (average >=90.50)
    {
        cout << yellow << "GWA: " << reset <<"1.50" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    } else if (average >=87.50)
    {
        cout << yellow << "GWA: " << reset  <<"1.75" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    } else if (average >=84.50)
    {
        cout << yellow << "GWA: " << reset <<"2.00" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    } else if (average >=81.50)
    {
        cout << yellow << "GWA: " << reset <<"2.25" << reset << endl;
        cout << green << "You Passed" << reset << endl;
    } else if (average >=78.50)
    {
        cout << yellow << "GWA: " << reset <<"2.50" << endl;
        cout << green << "You Passed" << reset << endl;
    }else
    else {
        cout << yellow << "GWA: " << reset <<"5.00" << endl;
        cout << yellow << "Status: " << red << "Failed" << reset << endl;
    }
    
    return 0;
}