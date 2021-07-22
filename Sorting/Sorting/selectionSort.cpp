#include "selectionSort.h"
#include <iostream>

using std::cout;
using std::endl;

void selectionSort(vector<int> vec) {
	int min = INT_MAX;
	int minPos = 0;

	for (int i = 0; i < vec.size(); i++) {
		for (int j = i; j < vec.size(); j++) {
			if (vec[j] < min) {
				min = vec[j];
				minPos = j;
			}
		}
		int temp = vec[i];
		vec[i] = min;
		vec[minPos] = temp;

		min = INT_MAX;
		minPos = 0;
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}