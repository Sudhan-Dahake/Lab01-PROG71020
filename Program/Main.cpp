// Write the name of the developers and the group number here
// Member 1: Sudhan Dahake
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// -------------------------------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 01 - January 21/2021
//--------------------------------------------------------------


#include <iostream>

#include "CoordinateStruct.h"							// Header File for CoordinateStruct Library
#include "max.h"										// Header File for max Library
#include "swap.h"										// Header File for swap Library
#include "multiply.h"									// Header File for multiply Library

#define ARRAY_LENGTH 5
using namespace std;



int main() {

	// ** Question-1 **
	cout << "Question-1:" << endl;

	cout << "The max of 9 and 7 is " << max(9, 7) << endl;

	cout << "The max of 9, 15, and 17 is " << max(9, 15, 17) << endl;

	int arrayOne[ARRAY_LENGTH] = { 10,2,30,4,15 };
	cout << "The max of the array {10, 2, 30, 4, 15} is " << max(arrayOne) << endl;

	int arrayTwo[ARRAY_LENGTH] = { 8,70,16,15,14 };
	cout << "The max of the two given arrays is " << max(arrayOne, arrayTwo) << endl;

	// ** Question-2 **

	cout << "\nQuestion-2:" << endl;

	int num1 = 12;
	int num2 = 51;

	cout << "Before using the pointer swap function   " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	swap(&num1, &num2);
	cout << "After using the pointer swap function    " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << endl;

	cout << "Before using the reference swap function " << "num1 = " << num1 << ", " << "num2 = " << num2 << endl;
	swap(num1, num2);
	cout << "After using the reference swap function  " << "num1 = " << num1 << ", " << "num2 = " << num2 << ". " << endl;

	// ** Question-3 **

	cout << "\nQuestion-3:" << endl;

	Location location1;
	location1.latitude = 25;
	location1.longitude = 40;

	Location location2;
	location2.latitude = 50;
	location2.longitude = 80;

	cout << "Before using the pointer swap function: location1   =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" <<endl;
	swap(&location1, &location2);
	cout << "After using the pointer swap function: location1    =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	cout << "Before using the reference swap function: location1 =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;
	swap(location1, location2);
	cout << "After using the reference swap function: location1  =    " << "(" << location1.latitude << "," << location1.longitude << ")" << " and location2 = " << "(" << location2.latitude << "," << location2.longitude << ")" << endl;

	// ** Question-4 **

	cout << "\nQuestion-4: \n";

	cout << "The product of 4 * 15 * 7 is " << multiply(4, 15, 7) << endl;

	cout << "The product of 0.5 * 4.5  is " << multiply(0.5, 4.5) << endl;

	// b.Can you add another third function that has the same name and has two arguments : multiply(int, int)
	// and call it as follows multiply(2, 3) ? Why or why not? Add your answer as a comment in your code. (1 pt.).
	// 
	// no you cant add this third function because it will interfere with the first multiply function that we have,
	// it will have a function overload therefore not allowing the program to run properly. the first functiion has a default
	// value so it only requires 2 parameters so thats why the overload happens.
	// .......
	return 0;
}
