/*
Implementation of quick sort
*/

#include <iostream>
#include <fstream>
#include <string>
#include "quickSort.h"

using namespace std;

void swap(double* a, double* b) {
	double t = *a;
	*a = *b;
	*b = t;
}

double partition(double arr[], double low, double high) {
	double pivot = arr[high];
	double i = (low - 1);

	for (double j = low; j <= high - 1; j++) {
		if (arr[j] <= pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &ar[high]);
	return(i + 1);
}

void quickSort(double arr[], double low, double high) {
	if (low < high) {
		double p = partition(arr, low, high);
		
		quickSort(arr, low, p - 1);
		quickSort(arr, p + 1, high);
	}
}