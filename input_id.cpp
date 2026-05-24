#include <iostream>
using namespace std;

int main(){

   //variables
    string name = "Gozon, Guillano Marcus G.";
    string studentID = "UA202500194";

    //grades
    double OLCC02 = 1.75, OLIMFBDS = 1.75, OLFIL02 = 1.75, OLPHYE003 = 1.75, OLSS02 = 1.75, OLVAL02 = 1.75;
    double sum = 0;

    //average computation
    sum = OLCC02 + OLIMFBDS + OLFIL02 + OLPHYE003 + OLSS02 + OLVAL02;
    double average = sum / 6;

    //output
    cout << "Enter Student ID: " << endl;
    getline(cin, studentID);

    if (studentID == "UA202500194") {
        cout << "Student Name: " << name << endl;
    } else {
        cout << "Student ID not found." << endl;
    }

        cout << "Student ID: " << studentID << endl;
        cout << "OLCC02: " << OLCC02 << endl;
        cout << "OLIMFBDS: " << OLIMFBDS << endl;
        cout << "OLFIL02: " << OLFIL02 << endl;
        cout << "OLPHYE003: " << OLPHYE003 << endl;
        cout << "OLSS02: " << OLSS02 << endl;
        cout << "OLVAL02: " << OLVAL02 << endl;
        cout << "GWA: " << average << endl;

        if (average <=3.00) {
            cout << "Status: Passed!" << endl;
        } else {
            cout << "Status: Failed" << endl;
        }
    



    return 0;
}