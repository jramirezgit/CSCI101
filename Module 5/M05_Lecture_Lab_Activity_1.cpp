/* M05_Lecture_Lab_Activity_1.cpp
* Jose Ramirez
* 3/26/2023
* Collects user input on two integers and calculates the result.
*/

#include <iostream>
using namespace std;

// Declaring the function
int addition(int a, int b);

int main() {
    // The variables for the code
    int num1;
    int num2;
    int add;

    // User inputs for num1 and num2
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // We call the function to add up num1 and num2
    add = addition(num1, num2);

    // Print out the results
    cout << "The result is: " << add << endl;

    return 0;
}

// This defines what the function means
int addition(int a, int b) {
    return (a + b);
}