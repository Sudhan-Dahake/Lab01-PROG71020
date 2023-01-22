// Member 1: Sudhan Dahake
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// -------------------------------------------------------------
// PROG71020 - January 21/2021
// Assignment/Lab 01
//--------------------------------------------------------------

// Implementation of max Library 
// Used to test Function Overload of max functions
// Defining more than one functions with the same name in the same scope, however each function will have a unique signature.

#include "max.h"						// Header file for max library

// a function called max returns the max of two int numbers
int max(int x, int y) {

	if (x > y) {						// Check if x is greater than y number

		return x;						// return back x to the function call
	}

	return y;							// Otherwise return back y to the function call
}

// a function called max (the same name) but has a unique signature (takes 3 integers as its parameters) 
// Return the max of three int numbers
int max(int x, int y, int z) {

	// Check 2 conditions 
	if (x > y && x > z) {				// If x is greater than y and x is also greater than z

		return x;						// return x back to the function call
	}
	else if (y > x && y > z) {			// If y is greater than x and y is also greater than z

		return y;						// return x back to the function call
	}
	else {								// Otherwise, return back z to the function call

		return z;
	}
}

// a function called max that (the same name) but has a unique signature (takes an integer array as its parameter)
// Return back the max of an array:
int max(int array[]) {

	int max;								// Initialize max variable for later use to store max element of the array

	for(int i = 0; i < MAXSIZE; i++) {		// Iterate through the entire array

		if (i == 0) {						// Check if i is equal to 0 then assign that element of the array to the max variable

			max = array[i];									
		}
		else if (array[i] > max) {			// Check if the element at that particular index in the array is greater than max, then assign that element to the max variable 

			max = array[i];
		}
	}

											// Once the loop has completed that we have finished iterate through the array
	return max;								// Return back max to the function call 
}

// a function called max (the same name) but has a unique signature (where it takes 2 integer arrays as its parameters) 
// Return the max of two arrays
int max(int array1[], int array2[]) {

	int max1;								// Initialize a variable for later use to store max element of array1
	int max2;								// Initialize a variable for later use to store max element of array2

	for (int i = 0; i < MAXSIZE; i++) {		// Iterate through the entire array1

		if (i == 0) {						// Check if i is equal to 0 then assign that element of the array1 to the max variable

			max1 = array1[i];
		}
		else if (array1[i] > max1) {		// Check if the element at that particular index in the array1 is greater than max, then assign that element to the max variable 

			max1 = array1[i];
		}
	}

	for (int j = 0; j < MAXSIZE; j++) {		// Iterate through the entire array2

		if (j == 0) {						// Check if i is equal to 0 then assign that element of the array2 to the max variable

			max2 = array2[j];
		}
		else if (array2[j] > max2) {		// Check if the element at that particular index in the array2 is greater than max, then assign that element to the max variable 

			max2 = array2[j];
		}
	}

	// Once we found the max element from each array 
	// (max1 = largest element in array1)
	// (max2 = largest element in arary2)
	if (max1 > max2) {						// Check if max1 element is greater than max2 element	

		return max1;						// return back max1 element to the function call
	}
	else {									// Otherwise, we know max2 is either greater than or equal to max1 element

		return max2;						// return back max2 element to the function call
	}
}