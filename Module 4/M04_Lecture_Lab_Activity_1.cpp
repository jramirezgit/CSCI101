/* M04_Lecture_Lab_Activity_1.cpp
* Jose Ramirez
* 3/26/2023
* Displays palyer's health after taken damage and if player is dead.
*/

#include <iostream>
using namespace std;

int main() {

	// Declares the important stuff needed for this code
	int health = 100;
	bool flag = true;
	int damage;

	cout << "This program calculates the health level of a player and displays it on the screen. \n";

	// The while flag, When it's true, we get the damage, if not, player dies.
	while (flag == true) {

		// Input from user for the damage
		cout << "Enter Damage: ";
		cin >> damage;

		if (damage < 100) {
			
			cout << "The player is alive, the current health level is " << health - damage << "." << endl;
	
		// If else is triggered, flag will turn to false and the player will be dead.
		} else {

			flag = false;
		
		}
	}

	cout << "The player is dead.";

	return 0;
}