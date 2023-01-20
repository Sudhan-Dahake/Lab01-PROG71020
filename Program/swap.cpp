#include "swap.h"

void swap(int* x, int* y) {

	int temp = *x;

	*x = *y;

	*y = temp;
}

void swap(int& x, int& y) {

	int temp = x;

	x = y;

	y = temp;
}

void swap(struct Location* ptrToLocation1, struct Location* ptrToLocation2) {

	struct Location temp;

	temp.latitude = (*ptrToLocation1).latitude;
	temp.longitude = ptrToLocation1->longitude;

	ptrToLocation1->latitude = ptrToLocation2->latitude;
	(*ptrToLocation1).longitude = (*ptrToLocation2).longitude;

	ptrToLocation2->latitude = temp.latitude;
	(*ptrToLocation2).longitude = temp.longitude;
}

void swap(struct Location& refToLocation1, struct Location& refToLocation2) {

	struct Location temp;

	temp.latitude = refToLocation1.latitude;
	temp.longitude = refToLocation1.longitude;

	refToLocation1.latitude = refToLocation2.latitude;
	refToLocation1.longitude = refToLocation2.longitude;

	refToLocation2.latitude = temp.latitude;
	refToLocation2.longitude = temp.longitude;
}