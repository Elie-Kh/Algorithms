#include <vector>
#include <iostream>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"

using std::vector;

int main() {
	vector<int> ascending;
	vector<int> descending;
	vector<int> random;

	for (int i = 0; i < 100; i++) {
		ascending.push_back(i);
		descending.push_back(99 - i);
		random.push_back(rand());
	}

	// 
	bubbleSort(ascending);
	bubbleSort(descending);
	bubbleSort(random);

	std::cout << std::endl;

	for (int i = 0; i < descending.size(); i++) {
		std::cout << descending[i] << " ";
	}

	std::cout << std::endl << std::endl;

	insertionSort(ascending);
	insertionSort(descending);
	insertionSort(random); 
	
	for (int i = 0; i < descending.size(); i++) {
		std::cout << descending[i] << " ";
	}

	std::cout << std::endl << std::endl;

	selectionSort(ascending);
	selectionSort(descending);
	selectionSort(random);

	return 0;
}