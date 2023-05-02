/* M06_Programming_Assignment-Part_!.cpp
* Jose Ramirez
* 4/9/2023
* Analyzes a year's worth of rainfall data.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string county;
    const int numMonths = 12;
    double rainfall[numMonths];
    string monthNames[numMonths] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

    cout << "Enter county name: ";
    cin >> county;

    // Input rainfall data for each month
    for (int i = 0; i < numMonths; i++) {
        cout << "Enter rainfall for " << monthNames[i] << ": ";
        cin >> rainfall[i];
    }

    // Calculate total rainfall and average rainfall
    double totalRainfall = 0;
    double averageRainfall = 0;
    for (int i = 0; i < numMonths; i++) {
        totalRainfall += rainfall[i];
    }
    averageRainfall = totalRainfall / numMonths;

    // Find driest and wettest months
    double driestMonth = rainfall[0];
    double wettestMonth = rainfall[0];
    int driestMonthIndex = 0;
    int wettestMonthIndex = 0;
    for (int i = 1; i < numMonths; i++) {
        if (rainfall[i] < driestMonth) {
            driestMonth = rainfall[i];
            driestMonthIndex = i;
        }
        if (rainfall[i] > wettestMonth) {
            wettestMonth = rainfall[i];
            wettestMonthIndex = i;
        }
    }

    // Output results
    cout << "Annual Rain Report for " << county << " County" << endl;
    cout << fixed << setprecision(2);
    cout << "Total rainfall: " << totalRainfall << endl;
    cout << "Average rainfall: " << averageRainfall << endl;
    cout << "The least rain fell in " << monthNames[driestMonthIndex] << " with " << driestMonth << " inches." << endl;
    cout << "The most rain feel in " << monthNames[wettestMonthIndex] << " with " << wettestMonth << " inches." << endl;

    return 0;
}
