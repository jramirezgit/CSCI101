/* M03_Programming_Assigment-Part_2.cpp
* Jose Ramirez
* 3/25/2023
* To calculate and determine a person's body mass index (BMI)
*/

#include <iostream>

using namespace std;

int main() {
	float weight, height;
	float BMI;
	
	// Receeiving the input from user in weight and height to later determine BMI.
	cout << "Enter your weight in pounds: " << endl;
	cin >> weight;

	cout << "Enter your height in inches: " << endl;
	cin >> height;

	// Pretty cool calculations.
	BMI = (weight * 703) / (height * height);

	// Stating the BMI from the user.
	cout << "Your BMI is: " << BMI << endl;

	// The if-else statements.
	if (BMI < 18.5) {
		cout << "You are underweight" << endl;
	}
	else if (BMI > 25) {
		cout << "You are overweight" << endl;
	}
	else {
		cout << "Your weight is optimal" << endl;
	}
	
	return 0;
}