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
