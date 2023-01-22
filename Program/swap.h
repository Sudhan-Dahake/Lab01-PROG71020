// Member 1: Sudhan Dahake
// Member 2: Owen Covach (Team Leader)
// Member 3: Hangsihak Sin
// Group Number: 10
// -------------------------------------------------------------
// PROG71020 - January 21/2021
// Assignment/Lab 01
//--------------------------------------------------------------

// Interface for swap Library

#pragma once

#include "CoordinateStruct.h"							// Header File for CoordinateStruct Libarary

void swap(int*, int*);									// Function Declaration of swap(int*, int*)
void swap(int&, int&);									// Function Declaration of swap(int&, int&)
void swap(struct Location*, struct Location*);			// Function Declaration of swap(struct Location*, struct Location*)
void swap(struct Location&, struct Location&);			// Function Declaration of swap(struct Location&, struct Location&)