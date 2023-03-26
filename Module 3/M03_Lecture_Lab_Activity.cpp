/* M03_Lecture_Lab_Activity.cpp
* Jose Ramirez
* 3/25/2023
* Input of a grade and convert to a letter grade
*/

#include <iostream>
using namespace std;

int main() {
    int grade;
    char letterGrade;

    cout << "Please enter a score between 1-100 and press enter to determine letter grade." << endl;
    cin >> grade;

    // This gets the grade as an input from the user.

    if (grade < 0 || grade >100)
    {
        cout << "This is an invalid grade, please enter a valid grade when the progran is run again." << endl;
        return 0;
    }

    // if anything else than 1-100, this will stop the program.

    else if (grade < 60)
    {
        letterGrade = 'F';
    }
    else if (grade < 70)
    {
        letterGrade = 'D';
    }
    else if (grade < 80)
    {
        letterGrade = 'C';
    }
    else if (grade < 90)
    {
        letterGrade = 'B';
    }
    else if (grade <= 100)
    {
        letterGrade = 'A';
    }

    cout << "The letter grade is: " << letterGrade << endl;
    return 0;
}
