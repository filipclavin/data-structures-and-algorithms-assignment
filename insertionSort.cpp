#include "sort.h"

void insertionSort(std::vector<int> v) {
	int size = v.size();

	for (int i = 0; i < size; i++) {
		int j = i;
		while (j > 0 && v[j] < v[j - 1]) {
			int temp = v[j];
			v[j] = v[j - 1];
			v[j - 1] = temp;
			j--;
		}
	}
}