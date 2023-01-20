#include "max.h"

int max(int x, int y) {

	if (x > y) {

		return x;
	}

	return y;
}

int max(int x, int y, int z) {

	if (x > y && x > z) {

		return x;
	}
	else if (y > x && y > z) {

		return y;
	}
	else {

		return z;
	}
}

int max(int array[]) {

	int max;

	for(int i = 0; i < MAXSIZE; i++) {

		if (i == 0) {

			max = array[i];
		}
		else if (array[i] > max) {

			max = array[i];
		}
	}

	return max;
}

int max(int array1[], int array2[]) {

	int max1;
	int max2;

	for (int i = 0; i < MAXSIZE; i++) {

		if (i == 0) {

			max1 = array1[i];
		}
		else if (array1[i] > max1) {

			max1 = array1[i];
		}
	}

	for (int j = 0; j < MAXSIZE; j++) {

		if (j == 0) {

			max2 = array2[j];
		}
		else if (array2[j] > max2) {

			max2 = array2[j];
		}
	}

	if (max1 > max2) {

		return max1;
	}
	else {

		return max2;
	}
}