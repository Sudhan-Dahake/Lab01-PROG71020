// Member 1: Sudhan Dahake
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// -------------------------------------------------------------
// PROG71020 - Winter 2023
// Assignment/Lab 01 - January 21/2021
//--------------------------------------------------------------

// Implementation of swap Library 

#include "swap.h"						// Header file for swap library

// swap function using pointers
void swap(int* x, int* y) {

	int temp = *x;						// x variable pointer is dereferenced to get to the location where the value is stored inside the memory. Then, we can assigned the dereferenced x value to a temp variable

	*x = *y;							// Since a copy of x value is stored in a temp var
										// We can now dereference y pointer to get to the value and assign it to the dereferenced pointer x value 

	*y = temp;							// temp variable value can be assigned to the y variable by using the pointer to dereference. 
}

// swap function using references
void swap(int& x, int& y) {

	// reference variable does not need to be dereference to access the value
	int temp = x;						// store a copy of variable x value to temp variable

	x = y;								// swap y value to x variable

	y = temp;							// swap temp value (containing the original value of x) to y variable
}

// swap function between Location1 and Location2 structs using pointers 
void swap(struct Location* ptrToLocation1, struct Location* ptrToLocation2) {

	// pointer variable required to be dereference to access the value
	// Arrow operator is typically use to access its member

	struct Location temp;										// Initialize a temp struct to store a copy of a struct to be swapped 

	// Store latitude and longtitude of ptrToLocation1 struct to the temp struct
	temp.latitude = (*ptrToLocation1).latitude;					// (*ptrToLocation1).latitude means we first have to dereference ptrToLocation1 and use dot operator to be able to access the latitude value
	temp.longitude = ptrToLocation1->longitude;					// ptrToLocation1->longtitude mens we use Arrow operator to access the member of the struct which in this case is the longtitude

	// Swap latitude and longtitude of ptrToLocation2 to ptrToLocation1 struct
	ptrToLocation1->latitude = ptrToLocation2->latitude;
	(*ptrToLocation1).longitude = (*ptrToLocation2).longitude;

	// Swap latitude and longtitude of temp struct (original long & lat of ptrToLocation1 struct) to ptrToLocation2 struct
	ptrToLocation2->latitude = temp.latitude;
	(*ptrToLocation2).longitude = temp.longitude;
}

// swap function between Location1 and Location2 structs using references
void swap(struct Location& refToLocation1, struct Location& refToLocation2) {

	// reference variable does not need to be dereference to access the value
	// Use a dot operator to access the value

	struct Location temp;										// Initialize a temp struct to store a copy of a struct to be swapped 

	// Store latitude and longtitude of refToLocation1 struct to the temp struct
	temp.latitude = refToLocation1.latitude;
	temp.longitude = refToLocation1.longitude;

	// Swap latitude and longtitude of refToLocation2 to refToLocation1 struct
	refToLocation1.latitude = refToLocation2.latitude;
	refToLocation1.longitude = refToLocation2.longitude;

	// Swap latitude and longtitude of temp struct (original long & lat of refToLocation1) to refToLocation2 struct
	refToLocation2.latitude = temp.latitude;
	refToLocation2.longitude = temp.longitude;
}