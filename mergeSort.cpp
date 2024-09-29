/*
Implementation of merge sort
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;


void merge(double arr[], int left, int mid, int right) {
	int n1 = mid - left + 1;
	int n2 = right - mid;

	int temp1[n1], temp2[n2];

	for (int i = 0; i < n1; i++) {
		temp1[i] = arr[i + left];

	}
	for (int j = 0; j < n2; j++) {
		temp2[j] = arr[mid + 1 + j];
	}

	int i = 0;
	int j = 0;
	int k = left;
	while (i < n1 && j < n2) {
		if (temp1[i] <= temp2[j]) {
			arr[k] = temp1[i];
			i++;
		}
		else {
			arr[k] = temp2[j];
			j++;
		}
		k++;
	}
	// if any elements remain from either array
	while (i < n1) {
		arr[k] = temp1[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = temp2[j];
		j++;
		k++;
	}

}
void mergeSort(double arr[], int left, int right) {
	if (left < right) {
		int mid = left + (right - left) / 2;
		// finding midpoint
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		// actually sorting
		merge(arr, left, mid, right);
	}
}