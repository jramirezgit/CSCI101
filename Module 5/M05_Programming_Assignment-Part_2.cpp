/* M05_Programming_Assignment-Part_2.cpp
* Jose Ramirez
* 3/26/2023
* A code to clearly display radius, area, and perimeter of the resulting circle.
*/

// The super important stuff (Added a new one, math.h) and define pi.
#include <iostream>
#include <math.h>
#define pi 3.1416
using namespace std;

// Function to determine the distance between two points.
float distance(float x1, float y1, float x2, float y2) {
	float distance;
	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return distance;
}

// Function to determine the radius of the circle.
float radius(float x1, float y1, float x2, float y2) {
	float radius;
	radius = distance(x1, y1, x2, y2);
	return radius;
}

// Function to determine the circumference of the circle.
float circumference(float radius) {
	float circumference;
	circumference = 2 * pi * radius;
	return circumference;
}

// Function to determine the area of the circle.
float area(float radius) {
	float area;
	area = pi * radius * radius;
	return area;
}

// This is the main of the whole assignment, we first get the inputs from the users and then output the results for the circle.
int main() {
	float x1, y1, x2, y2;
	cout << "Enter the coordinate of center of circle: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinate of point on circle: ";
	cin >> x2 >> y2;

	float r = radius(x1, y1, x2, y2);
	cout << "Radius of circle: " << r << endl;
	cout << "Diameter of circle: " << 2 * r << endl;
	cout << "Circumference of circle: " << circumference(r) << endl;
	cout << "Area of circle: " << area(r) << endl;

	return 1;
}