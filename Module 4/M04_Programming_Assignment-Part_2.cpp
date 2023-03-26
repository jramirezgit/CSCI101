/* M04_Programming_Assignment-Part_2.cpp
* Jose Ramirez
* 3/26/2023
* Converts Celsius temperature to Fahrenheit temperatures.
*/

#include <iostream>
using namespace std;

int main() {
	// Ints needed for the code to work.
	int lower;
	int upper;
	int celsius;

	// Input from users to determine the lower and upper range of the temperature.
	cout << "Enter the lower range temperature in Celsius: " << endl;
	cin >> lower;

	cout << "Enter the upper range temperature in Celsius: " << endl;
	cin >> upper;

	while (upper <= lower) {
		// If the lower range is greater than the upper range, it will send it right back.
		cout << "Invalid input, must be greater than the lower range." << endl;
		cout << "Enter the upper range temperature in Celsius: " << endl;
		cin >> upper;
	}

	// Prints out the output table for the convertions.
	cout << "Celsius \t Fahrenheit" << endl;

	for (celsius = lower; celsius <= upper; celsius++) {
		// Makes the calculations to convert the Celsius to Fahreneheit.
		cout << celsius << "\t" << "\t" << (celsius * (9 / (double)5) + 32) << endl;
	}
	return 0;
}