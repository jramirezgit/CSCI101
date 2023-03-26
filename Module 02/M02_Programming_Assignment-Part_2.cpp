/* M02_Programming_Assigment_Part_2
* Jose Ramirez
* 3/25/2023
* Get the input from user for the cost of a meal and add tax amount, tip amount, and output the total bill at the end
*/

#include <iostream>
using namespace std;

int main() {
	//declare the variables
	float meal;
	float tax;
	float tip;

	//set constant value
	const float meal_tax = 0.0675;
	const float meal_tip = 0.20;

	//calculations
	cout << "Enter the cost of the restraurant bill: $"; //Enter the cost of the bill
	cin >> meal; // user input

	tax = meal * meal_tax; //calculation of taxes
	meal = meal + (meal * meal_tax); //calculation of taxes to meal
	tip = meal * meal_tip; //calculation of tips
	meal = meal + (meal * meal_tip); //calculation of tips to meal

	//output
	cout << "The tax amount will be: $" << tax << endl;
	cout << "The tip amount will be: $" << tip << endl;
	cout << "The final restaurant bill after taxes and tips will be: $" << meal << endl;
}