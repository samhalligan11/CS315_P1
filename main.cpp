
/*
Implementation of insertion sort, merge sort, and quick sort
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "quickSort.h"
#include "insertionSort.h"
#include "mergeSort.h"

using namespace std;

int main() {
	map<string, double> games;
	//string games[];
	//double ratings[];

	// gets file
	string userData;
	cout << "What data would you like sorted? Enter file name: " << endl;
	cin >> userData;
	ifstream file(userData);
	string line;
	while (getline(file, line)) {
		cout << line << endl;
	}
	int n = games.size();
	// don't know if the above line will work


	// for insertion sort
	//insertionSort(games, n);


	// for merge sort
	//mergeSort(games, 0, n - 1);

	// for quick sort


	//quickSort(games, 0, n - 1);


}
