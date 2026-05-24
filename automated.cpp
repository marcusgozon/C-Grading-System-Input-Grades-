#include <iostream>
#include <vector>
using namespace std;

// Define a Student structure
struct Student {
    string id;
    string name;
    double grades[6]; // 6 subjects
};

// Function to compute GWA
double computeAverage(double grades[], int count) {
    double sum = 0;
    for (int i = 0; i < count; i++) {
        sum += grades[i];
    }
    return sum / count;
}

int main() {
    // Create a list of students
    vector<Student> students = {
        {"UA202500194", "Gozon, Guillano Marcus G.", {1.75, 1.75, 1.75, 1.75, 1.75, 1.75}},
        {"UA202500195", "Juan Dela Cruz", {2.00, 2.25, 1.75, 2.50, 2.00, 2.25}},
        {"UA202500196", "Maria Santos", {1.50, 1.75, 1.50, 1.75, 1.50, 1.75}}
    };

    // Ask for input
    string inputID;
    cout << "Enter Student ID: ";
    getline(cin, inputID);

    // Search for student
    bool found = false;
    for (auto &s : students) {
        if (s.id == inputID) {
            found = true;
            cout << "Student Name: " << s.name << endl;
            cout << "Student ID: " << s.id << endl;

            // Print grades
            for (int i = 0; i < 6; i++) {
                cout << "Subject " << (i+1) << ": " << s.grades[i] << endl;
            }

            // Compute average
            double average = computeAverage(s.grades, 6);
            cout << "GWA: " << average << endl;

            if (average <= 3.00) {
                cout << "Status: Passed!" << endl;
            } else {
                cout << "Status: Failed" << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Student ID not found." << endl;
    }

    return 0;
}