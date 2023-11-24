#include "sort.h"

void selectionSort(std::vector<int> v) {
	int size = v.size();

	for (int i = 0; i < size; i++) {
		int indexOfMin = i;
		for (int j = i + 1; j < size; j++) {
			if (v[j] < v[indexOfMin]) {
				indexOfMin = j;
			}
		}
		int temp = v[i];
		v[i] = v[indexOfMin];
		v[indexOfMin] = temp;
	}
}