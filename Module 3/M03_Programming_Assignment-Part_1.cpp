/* M03_Programming_Assigment-Part_1.cpp
* Jose Ramirez
* 3/25/2023
* Determines if inputs forms a triangle and if so, a right triangle
*/

#include<iostream>

using namespace std;

int main() {
	int side1, side2, side3;
	
	cout << "Enter the length of the triangle sides: ";
	cin >> side1 >> side2 >> side3;

	if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
		cout << "These sides form a valid triangle." << endl;

		// Checks if input forms a triangle.

		if (side1 * side1 == side2 * side2 + side3 * side3 || side2 * side2 == side1 * side1 + side3 * side3 || side3 * side3 == side1 * side1 + side2 * side2) {
			cout << "This is a right triangle" << endl;
		}

		// checks if triangle forms a right triangle.

		else {
			cout << "This is not a right triangle" << endl;
		}
	}
	else {
		cout << "These sides form an invalid triangle" << endl;
	}
	return 0;
}