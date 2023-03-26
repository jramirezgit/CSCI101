/* M04_Lecture_Lab_Activity_2.cpp
* Jose Ramirez
* 3/26/2022
* Calculate the Fibonacci number
*/

#include<iostream>
using namespace std;

// Function to return the fibonacci term and in base cases return a 1, otherwsie return a sum.
int Fib(int number) {
	if (number == 1)
		return 1;
	if (number == 2)
		return 1;
	return Fib(number - 1) + Fib(number - 2);
}

// This gets the number from the user and for the calculation, the prints it out.
int main() {
	int num;
	cout << " Please enter a number to calculate the corresponding Fibonacci number:  ";
	cin >> num;
	cout << "Fib" << num << " is " << Fib(num);
	return 0;
}