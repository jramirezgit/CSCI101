/* M07_Programming_Assignment-Part_1
* Jose Ramirez
* 4/19/2023
* A program that prompts the user for input and allows all of these member data values to be specified.
*/

// The important stuff (without this, this is nothing)
#include <iostream>
#include <string>
using namespace std;

// The struct which information would be stored in.
struct MovieData {
    string title;
    string genre;
    string director;
    int yearReleased;
    int runningTime;
};

// This is the input required for each movie.
void displayMovie(MovieData movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Genre: " << movie.genre << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    MovieData firstMovie, secondMovie;

    // Prompt user for input for the first movie.
    cout << "Enter information for movie 1: " << endl;
    cout << "Title: ";
    getline(cin, firstMovie.title);
    cout << "Genre: ";
    getline(cin, firstMovie.genre);
    cout << "Director: ";
    getline(cin, firstMovie.director);
    cout << "Year Released: ";
    cin >> firstMovie.yearReleased;
    cout << "Running Time (in minutes): ";
    cin >> firstMovie.runningTime;

    // Prompt user for input for the second movie.
    cout << endl << "Enter information for movie 2: " << endl;
    cin.ignore(); // ignore newline character left in buffer by previous input.
    cout << "Title: ";
    getline(cin, secondMovie.title);
    cout << "Genre: ";
    getline(cin, secondMovie.genre);
    cout << "Director: ";
    getline(cin, secondMovie.director);
    cout << "Year Released: ";
    cin >> secondMovie.yearReleased;
    cout << "Running Time (in minutes): ";
    cin >> secondMovie.runningTime;

    // Display information for both movies from user input.
    cout << endl << "Movie Information: " << endl;
    displayMovie(firstMovie);
    displayMovie(secondMovie);

    return 0;
}
