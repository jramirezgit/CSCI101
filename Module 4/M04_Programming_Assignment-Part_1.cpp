/*M04 Programming Assigment - Part 1
* Jose Ramirez
* 3/2/2023
* Asks the user for the mph to determine how many hours it has traveled and much it wil travel
*/

#include<iostream>
using namespace std;

int main() {
	//Ints of the important stuff for the code.
	int speed;
	int time;
	int distance;
	int i;

	// Input from the user for the speed of the vehicle.
	cout << "Enter the speed of the vehicle (MPH): ";
	cin >> speed;

	while (1) {
		if (speed < 0) {

			// Hold up, something isn't right, if value is negative, it will send it back.
			cout << "Invalid speed value, need to be a positive value." << endl;
			cout << "Enter the speed of the vehicle (MPH): ";
			cin >> speed;
		} if (speed >= 0) {
			break;
		}
	}

	// Input from the user for the hours the vehicle has traveled.
	cout << "Enter how many hours it has traveled: ";
	cin >> time;

	while (1) {
		if (time < 1) {
			// Something isn't right once again, if value is less than one, it will send it back.
			cout << "Invalid time, needs to be greater than one." << endl;
			cout << "Enter how many hours it has traveled: ";
			cin >> time;
		} if (time >= 1) {
			break;
		}
	}

	// Print out the table of the output with the calculations to determine the distance per hour.
	cout << endl << " Hour Distance Traveled" << endl << endl;
	cout << "-------------------------" << endl;
	for (i = 1; i <= time; i++) {
		distance = speed * i;
		cout << i << " " << distance << endl;
	}
}