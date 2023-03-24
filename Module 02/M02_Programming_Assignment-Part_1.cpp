/*Program name: M02_Programming_Assigment_Part_1.cpp
* Author: Jose Ramirez
* Date last updated: 3/24/2023
* Purpose: Program to determine the number of cookies and the materials needed to make these cookies
*/

#include <iostream>
using namespace std;

int main()
{
    //declare variables
    float cookies;
    float sugar;
    float butter;
    float flour;
    
    //set constant value
    const float cookie_recipe = 48.0;
    const float sugar_recipe = 1.5;
    const float butter_recipe = 1.0;
    const float flour_recipe = 2.75;

    //calculations
    cout << "Enter the number of cookies: "; // Enter the amount of cookies
    cin >> cookies; // user input

    sugar = (cookies * sugar_recipe) / cookie_recipe; //Calculation of sugar
    butter = (cookies * butter_recipe) / cookie_recipe; // calculation of butter
    flour = (cookies * flour_recipe) / cookie_recipe; // calculation of flour

    //output the result
    cout << " To make " << cookies << " cookies, you will need: " << endl;
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flour" << endl;
}
