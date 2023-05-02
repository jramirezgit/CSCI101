<!--Heading-->
# CSCI101
These are my codes uploaded to the Computer Science 101 course during college.

<!--Information-->
## Information
This README file will explain every single program and their intended use depending on the assignment. Each folder in this repository will will correspond to a module in which you can look at the code and see how it works. Let me know if there's something I can fix in my codes up in the issues tab and I'll take a look at it as soon as possible.

<!--Table on contents (Don't forget the space between the heading and link-->
## Table of contents
* [Module 2](https://github.com/jramirezgit/CSCI101#module-2)
* [Module 3](https://github.com/jramirezgit/CSCI101#module-3)
* [Module 4](https://github.com/jramirezgit/CSCI101#module-4)
* [Module 5](https://github.com/jramirezgit/CSCI101#module-5)
* [Module 6](https://github.com/jramirezgit/CSCI101#module-6)
* [Module 7](https://github.com/jramirezgit/CSCI101#module-7)

<!--Module 2-->
## Module 2
### M02 Programming Assignment - Part 1
In this assignment, we are demostrated on how to write simple programs.

A cookie recipe calls for the following ingredients:

```
- 1.5 cups of sugar
- 1 cup of butter
- 2.75 cups of flour
```

The recipe produces 48 cookies with this amount of the ingredients. This program will ask the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the user specified number of cookies.

This is the output of this specific code:
![M02 Progamming Assignment - Part 1 Output](https://github.com/jramirezgit/CSCI101/blob/main/Images/M02_Programming_Assignment-Part_1_Output.png)

### M02 Programming Assignment - Part 2
In this assignment, We will write a program that informs a user of their meal charge. Create a variable and assign it a value for the meal charge (e.g. $32.95). The program should then compute the tax and tip on the restaurant bill. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax.

Display the meal cost, tax amount, tip amount, and total bill on the screen.

This is the output of this specific code:
![M02 Programming Assignment - Part 2 Output](https://github.com/jramirezgit/CSCI101/blob/main/Images/M02_Programming_Assignment-Part_2_Output.png)

<!--Module 3-->
## Module 3
### M03 Lecture Lab Activity 1
In this assignment, we will write a C++ program that takes that user input of number grade and coverts it to a letter.

This is the output of this specific code:
![M03 Lecture Lab Activity 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M03_Lecture_Lab_Activity_1_Output.png)

### M03 Programming Assignment - Part 1
A triangle has three sides where the sum of the length of two of the sides must exceed the other side. In a right traingle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides.

In this assignment, we will write a program that prompts the user to enter the legths of three sides. The program will output a message indicating whether or not the lengths form a triangle and, if so, outputs a message indicating you have a valid triangle and wheter or not the triangle is a right trinagle.

We are required to use a nested if statement to check if three sides makes a right triangle, if nested if statement is not used, we will get deducted points.

This is the output of this specific code:
![M03 Programming Assignment - Part 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M03_Programming_Assignment-Part_1_Output.png)

### M03 Programming Assignment - Part 2
In this assignment, we will write a program that calculates and displays a person's body mass index (BMI). The BMI is often used to determine wether a person with a sedentary lifestyle is overweight or underweight for his or her height. A person's BMI is calculated with the following formula:

$$
BMI = weight x 703/height^2
$$

Where weight is measured in pounds and height is measured in inches.

The program should display the calculated BMI along with a message indicating whether the person has optimal weight, is underweight, or is overweight.

A person's weight is considered to be optimal if his or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered to be underweight. If the BMI value is greater than 25, the person is considered to be overweight.

This is the output of this specific code:
![M03 Programming Assignment - Part 2](https://github.com/jramirezgit/CSCI101/blob/main/Images/M03_Programming_Assignment-Part_2_Output.png)

<!--Module 4-->
## Module 4
### M04 Lecture Lab Activity 1
In this assignment, we will write a C++ file that initializes the health of a player to 100 and enters a damage number of choice, finally displays if the player is still alive by using the Flag-controlled while loop.

Exmaple output:
```
This program calculates the health level of a player and displays it on the screen.
Enter damage: 20
The player is alive, the current health level is 80.
Enter damage: 100
Sorry, the player is dead.
```
This is the output of this specific code:
![M04 Lecture Lab Activity 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M04_Lecture_Lab_Activity_1_Output.png)

### M04 Lecture Lab Activity 2
In this assignment, we will write a C++ file that calculates the Fibonacci number.

Example output:
```
Please enter a number to calculate the corresponding Fibonacci number.
If user enter 5:
Output: Fib5 is 5.
```

Note that there are two base case, Fib1 = 1, Fib2 = 1.
Formula to use: Fibn = Fib(n - 1) + Fib(n - 2).

This is the output of this specific code:
![M04 Lecture Lab Activity 2](https://github.com/jramirezgit/CSCI101/blob/main/Images/M04_Lecture_Lab_Activity_2_Output.png)

### M04 Programming Assignment - Part 1
The distance a vehicle travels can be calculated as follows:
```
distance = speed * time
```

For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.

In this assignment, we will write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then use a loop to display the distance the vehicle has traveled for each hour of that time period. Here is an example of the output:
```
What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3
Hour    Distance Traveled
-------------------------
1       40
2       80
3       120
```

**Input Validation:** Do not accept a negative number for speed and do not accept any values less than 1 for time traveled. This was worth 5 points.

This is the output of this specific code:
![M04 Programming Assignment - Part 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M04_Programming_Assignment-Part_1_Output.png)

### M04 Programming Assignment - Part 2
In this assignment, we will write a program that converts Celcius temperatures to Fahrenheit temperatures. The formula is:

F = 9/5&deg;C + 32

F is the Fahrenheit temperature, and C is the Celsius temperature.

The program should prompt the user for a lower and upper range of temperatures in Celsius. Then use a loop to display a table of the Celsius temperatures and their Fahrenheit equivalents withing the range of values.

**Input Validation:** Ensure the second number is greater than the first number. This was worth 5 points.

This is the output of this specific code:
![M04 Programming Assignment - Part 2](https://github.com/jramirezgit/CSCI101/blob/main/Images/M04_Programming_Assignment-Part_2_Output.png)

<!--Module 5-->
## Module 5
### M05 Lecture Lab Activity 1
In this assignment, we will write a function addition that takes two integers and calculate the result.

**Input Validation:** Fail to use functions will result in point loss.

This is the output of this specific code:
![M05 Lecture Lab Activity 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M05_Lecture_Lab_Activity_1_Output.png)

### M05 Programming Assignment - Part 1
When an object is falling because of gravity, the following formula can be used to determine the distance the object falls in a specific time period:

$$
d = 1/2 gt^2
$$

The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t is the amount of time, in seconds, that the object has been falling.

In this assignment, we will write a function name **fallingDistance** that accepts an object's falling time (in seconds) as an argument. The function should return the distance, in meters, that the object has fallen during that time interval. The program should demonstrate the function by prompting the user for the total time and calling the function in a loop that passes the time values in 5 second increments as the argument and displays the elapsed time and return value. The output should have a header indentifying the column names and tabular fomatted values (values displayed are to illustrate formatting only):

Time Distance
0       0.0
5       30.0
10      45.0
15      52.0

This is the output of this specific code:
![M05 Programming Assignment - Part 1](https://github.com/jramirezgit/CSCI101/blob/main/Images/M05_Programming_Assignment-Part_1_Output.png)

### M05 Programming Assignment - Part 2
The following formula gives the distance between two points, (x1, y1) and (x2, y2) in the Cartesian plane:

$$
d = \sqrt{(x2 - x1)^2 + (y2 - y1)^2}
$$

Given the center and a point on the circle, you can use this formula to find the radius of the circle. In this assignment, we will create a program that prompts the user to enter the center and a point on the circle. The program should then output the circle's radius, diameter, circumference, and area. The program must have at least the following functions:

**calculateRadius:** Receives the x-y coordinates of the center and point on the circle (as input by the user) and calculates the distance between the points. This value is returned as the radius of the circle.

**calculateArea:** Receives the radius of a circle, calculates and returns the area of the circle.

**calculatePerimeter:** Receives the radius of a circle, calculates and returns the perimeter of the circle.

The output should clearly display the radius, area, permimeter of the resulting circle.

This is the output of this specific code:
![M05 Programming Assignment - Part 2](https://github.com/jramirezgit/CSCI101/blob/main/Images/M05_Programming_Assignment-Part_2_Output.png)

<!--Module 6-->
## Module 6
### M06 Programming Assignment - Part 1
In this assignment, we will write a program that analyzes a year’s worth of rainfall data. The program should accept the total rainfall for each of 12 months from the user and store it in an array of doubles. The program should then compute the totalRainfall, averageRainfall, driestMonth, and wettestMonth.

An array containing the string for each month’s name should also be created. The index values of both arrays should correlate to the same month - this will allow you to utilize the array of strings when displaying the names of each month when prompting for the rainfall amounts and then when displaying the statistics.

This information should be used by main to print a summary rainfall report similar to the following:
```
Annual Rain Report for <enter your county name here> County

Total rainfall: 23.19 inches

Average monthly rainfall: 1.93 inches

The least rain fell in January with 0.24 inches.

The most rain fell in April with 4.29 inches.
```

This is the output of this specific code:
![M06 Programming Assignment - Part 1]()

### M06 Programming Assignment - Part 2
In this assignment, we will write a program that uses a two-dimensional array to store the highest and lowest temperatures for each month of the year. The program should output the average high, average low, and the highest and lowest temperatures for the year. Your program must consist of the following functions:

Function **getData:** This function reads and stores data in the two- dimensional array.
Function **averageHigh:** This function calculates and returns the aver- age high temperature for the year.
Function **averageLow:** This function calculates and returns the average low temperature for the year.
Function **indexHighTemp:** This function returns the index of the highest high temperature in the array.
Function **indexLowTemp:** This function returns the index of the lowest low temperature in the array.

These functions must all have the appropriate parameters.

This is the output of this specific code:
![M06 Programming Assignment - Part 2]()

<!--Module 7-->
## Module 7
### M07 Lecture Lab Activity 1
Define a struct **computerType** to store the following data about a computer: Manufacturer (string), model type (string), processor type (string), ram (int) in GB, hard drive size (int) in GB, year when the computer was built (int), and the price (double).

In this assignment, we will write a program that declares a variable of type **computerType**, prompts the user to the input data for the struct, and then outputs all the computer's data from the struct.

Sample run:
```
Enter the name of the manufacturer: Dell
Enter the model of the computer: Inspiron
Enter processor type: I7 387
Enter the size of RAM (in GB): 32
Enter the size of hard drive (in GB): 512
Enter the year the computer was built: 1990
Enter the price: 1345.67

--------------------
Manufacturer: Dell
Model: Inspiron
Processor: I7 387
Ram: 32
Hard Drive Size: 512
Year Built: 1990
Price: $1345.67
```

This is the output of this specific code:
![M07 Lecture Lab Activity 1]()

### M07 Programming Assignment - Part 1
In this assignment, we will create a program that uses a structure named **MovieData** to store the following information about a movie:
```
Title
Genre
Director
Year Released
Running time (in minutes)
```

We will write a program that prompts the user for input and allows all of these member data values to be specified. The program should create two **MovieData** variables and create/use a method **displayMovie(MovieData)** to display the information about the movie in a clearly formatted manner.

This is the output of this specific code:
![M07 Programming Assignment - Part 1]()

### M07 Programming Assignment - Part 2
In this assignment, we will write a program that uses two structures **Name** and **Student** to store the following information for multiple students:

1. Create a NAME structure that consists of
    * First Name,
    * Middle Initial, and
    * Last Name.
2. Create a STUDENT structure that contains student information (Include the NAME structure within the Student information structure):
    * Name
    * ID
    * email
    * SSN
    *Program (an enum type containing programs such as CSCI, DBMS, INFM, SDEV)  (5 points)

This is the output of this specific code:
![M07 Programming Assignment - Part 2]()