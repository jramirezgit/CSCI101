/* M05_Programming_Assignment-Part_1.cpp
* Jose Ramirez
* 3/26/2023
* Determine the distance the object falls in a specific time period.
*/

// The important wacky stuff and also defining g which is 9.8.
#include <iostream>
#define g 9.8
using namespace std;

// This is the function which uses g to determine the distance of the falling object.
float fallingDistance(int time) {
	float distance;
	distance = (g * time * time) / 2;
	return distance;
}

// Print out the results of the function for every five seconds in a table form.
int main() {
	int time;
	cout << endl << "Time Distance" << endl << endl;
	for(time = 0; time <= 50 ; time += 5) {
		cout << time << "        " << fallingDistance(time) << endl;
	}
	return 0;
}
