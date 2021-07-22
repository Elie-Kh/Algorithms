#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

void bubbleSort(vector<int> vec) {
	for (int i = 0; i < vec.size(); i++) {
		for (int j = 1; j < vec.size() - i; j++) {
			if (vec[j] < vec[j - 1]) {
				int temp = vec[j - 1];
				vec[j - 1] = vec[j];
				vec[j] = temp;
			}
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;
}