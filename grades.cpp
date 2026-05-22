#include <iostream>
using namespace std;

int main() {

    //variables
    string name;
    int OLCC02, OLIMFBDS, OLFIL02, OLPHYE003, OLSS02, OLVAL02;
    int sum = 0;
    int average;

    //input user name
    cout << "(Surname, First Name, Middle initial)" << endl;
    cout <<"Enter Full Name: ";
    getline(cin, name);

    //input user grade
    cout <<"Enter your grade in OLCC02: ";
    cin >> OLCC02;
    cout <<"Enter your grade in OLIMFBDS: ";
    cin >> OLIMFBDS;
    cout <<"Enter your grade in OLFIL-02: ";
    cin >> OLFIL02;
    cout <<"Enter your grade in OLPHYE003: ";
    cin >> OLPHYE003;
    cout <<"Enter your grade in OLSS02: ";
    cin >> OLSS02;
    cout <<"Enter your grade in OLVAL02: ";
    cin >> OLVAL02;

    //computation grades
    sum = OLCC02 + OLIMFBDS + OLFIL02 + OLPHYE003 + OLSS02 + OLVAL02;
    average = sum / 6;

    //final output
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: " << average << endl;

    //conditionaG
    if (average <= 75){
        cout << "You  Passed!" << endl;
    } else {
        cout << "You Failed" << endl;
    }

    return 0;
}