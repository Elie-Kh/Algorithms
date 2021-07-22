#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void insertionSort(vector<int> vec) {
	for (int i = 1; i < vec.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (vec[j] < vec[j - 1]) {
				int temp = vec[j];
				vec[j] = vec[j - 1];
				vec[j - 1] = temp;
			}
			else {
				break;
			}
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}