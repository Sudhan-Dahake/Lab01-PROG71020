// Member 1: Sudhan Dahake
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// -------------------------------------------------------------
// PROG71020 - January 21/2021
// Assignment/Lab 01
//--------------------------------------------------------------

// Implementation of multiply library

#include "multiply.h"						// Header file for multiply library

// multiply that use 3 parameters (all with integer data type)
// each parameter is passed by value. However, the 3rd parameter use a default parameter value of 1 if it does not recieve a 3rd argument from the function call. Otherwise, it will use the passed value.
int multiply(int x, int y, int z = 1) {

	int product = x * y * z;				// x, y, z are multiplied together and the result is stored in product variable 

	return product;							// Return back the product of x * y * z back to the function call
}

// multiply that use 2 parameter (both are in double data type)
// this function will get called if it recieve 2 arguments in double and not the other because it has a unique signature
double multiply(double x, double y) {

	double product = x * y;					// x and y are multiplied and the result is stored in product variable

	return product;							// Return back the product of x * y back to the function call 
}