/* M07_Programming_Assignment-Part_2
* 4/22/2023
* Jose Ramirez
* Write a program that uses two structures Name and Student to store information for multiple students.
*/

// The really important stuff that might be helpful (just might be)
#include <iostream>
#include <string>

using namespace std;

// Define the fullName structure
struct fullName {
    string firstName;
    char middleInitial;
    string lastName;
};

// Define the Program enum
enum Program { CSCI, DBMS, INFM, SDEV };

// Define the STUDENT structure containing the fullName structure
struct STUDENT {
    fullName name;
    int id;
    string email;
    string ssn;
    Program program;
};

int main() {
    // Declare an array of STUDENT structures
    const int numStudents = 2; // Change this depending the amount of students (Picked 2 in default)
    STUDENT students[numStudents];

    // Get information for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter information for student #" << i + 1 << endl;

        // Get name
        cout << "First name: ";
        cin >> students[i].name.firstName;

        cout << "Middle initial: ";
        cin >> students[i].name.middleInitial;

        cout << "Last name: ";
        cin >> students[i].name.lastName;

        // Get other information
        cout << "ID: ";
        cin >> students[i].id;

        cout << "Email: ";
        cin >> students[i].email;

        cout << "SSN: ";
        cin >> students[i].ssn;

        // Get program
        cout << "Program (0=CSCI, 1=DBMS, 2=INFM, 3=SDEV): ";
        int program_num;
        cin >> program_num;
        students[i].program = static_cast<Program>(program_num);

        cout << endl;
    }

    // Print out information for each student
    for (int i = 0; i < numStudents; i++) {
        cout << "Student #" << i + 1 << " information:" << endl;

        // Print name
        cout << "Name: " << students[i].name.firstName << " " << students[i].name.middleInitial << ". " << students[i].name.lastName << endl;

        // Print other information
        cout << "ID: " << students[i].id << endl;
        cout << "Email: " << students[i].email << endl;
        cout << "SSN: " << students[i].ssn << endl;
        cout << "Program: ";
        switch (students[i].program) {
        case CSCI:
            cout << "CSCI" << endl;
            break;
        case DBMS:
            cout << "DBMS" << endl;
            break;
        case INFM:
            cout << "INFM" << endl;
            break;
        case SDEV:
            cout << "SDEV" << endl;
            break;
        }

        cout << endl;
    }

    return 0;
}
