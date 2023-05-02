/* M06_Programming_Assignment-Part_2.cpp
* Jose Ramirez
* 4/9/2023
* Analysis of temperatures recorded for the year.
*/

#include <iostream>
using namespace std;
const int numMonths = 12;

// Function to read and store temperature data
void getData(double temperatures[][2]) {
    for (int i = 0; i < numMonths; i++) {
        cout << "Enter highest temperature for month " << i + 1 << ": ";
        cin >> temperatures[i][0];
        cout << "Enter lowest temperature for month " << i + 1 << ": ";
        cin >> temperatures[i][1];
    }
}

// Function to calculate average high temperature for the year
double averageHigh(double temperatures[][2]) {
    double sum = 0;
    for (int i = 0; i < numMonths; i++) {
        sum += temperatures[i][0];
    }
    return sum / numMonths;
}

// Function to calculate average low temperature for the year
double averageLow(double temperatures[][2]) {
    double sum = 0;
    for (int i = 0; i < numMonths; i++) {
        sum += temperatures[i][1];
    }
    return sum / numMonths;
}

// Function to find index of highest high temperature in the array
int indexHighTemp(double temperatures[][2]) {
    int index = 0;
    double highestTemp = temperatures[0][0];
    for (int i = 1; i < numMonths; i++) {
        if (temperatures[i][0] > highestTemp) {
            highestTemp = temperatures[i][0];
            index = i;
        }
    }
    return index;
}

// Function to find index of lowest low temperature in the array
int indexLowTemp(double temperatures[][2]) {
    int index = 0;
    double lowestTemp = temperatures[0][1];
    for (int i = 1; i < numMonths; i++) {
        if (temperatures[i][1] < lowestTemp) {
            lowestTemp = temperatures[i][1];
            index = i;
        }
    }
    return index;
}

int main() {
    double temperatures[numMonths][2];
    getData(temperatures);

    double avgHigh = averageHigh(temperatures);
    double avgLow = averageLow(temperatures);
    int indexHigh = indexHighTemp(temperatures);
    int indexLow = indexLowTemp(temperatures);

    cout << "Average high temperature for the year: " << avgHigh << endl;
    cout << "Average low temperature for the year: " << avgLow << endl;
    cout << "Highest temperature for the year was " << temperatures[indexHigh][0] << " in month " << indexHigh + 1 << endl;
    cout << "Lowest temperature for the year was " << temperatures[indexLow][1] << " in month " << indexLow + 1 << endl;

    return 0;
}