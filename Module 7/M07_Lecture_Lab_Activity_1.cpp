/* M07_Lecture_Lab_Activity_1
* Jose Ramirez
* 4/19/2023
* A program made to receive input from the user's computer and prints it out from the struct.
*/

// All of the inportant nifty stuff to make this code run.
#include <iostream>
#include <string>
using namespace std;

// This is the magic of this code (struct) makes the code far more efficient (if made properly). 
struct computerType {
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

// The main game right here. We get the information from the user to add on into our struct and then print it out once again from the struct.
int main() {
    computerType myComputer;
    cout << "Enter the manufacturer: ";
    getline(cin, myComputer.manufacturer);
    cout << "Enter the model type: ";
    getline(cin, myComputer.modelType);
    cout << "Enter the processor type: ";
    getline(cin, myComputer.processorType);
    cout << "Enter the RAM size (in GB): ";
    cin >> myComputer.ram;
    cout << "Enter the hard drive size (in GB): ";
    cin >> myComputer.hardDriveSize;
    cout << "Enter the year built: ";
    cin >> myComputer.yearBuilt;
    cout << "Enter the price: $";
    cin >> myComputer.price;

    cout << endl << "Computer information:" << endl;
    cout << "Manufacturer: " << myComputer.manufacturer << endl;
    cout << "Model type: " << myComputer.modelType << endl;
    cout << "Processor type: " << myComputer.processorType << endl;
    cout << "RAM size: " << myComputer.ram << " GB" << endl;
    cout << "Hard drive size: " << myComputer.hardDriveSize << " GB" << endl;
    cout << "Year built: " << myComputer.yearBuilt << endl;
    cout << "Price: $" << myComputer.price << endl;

    return 0;
}
