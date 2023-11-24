#include "sort.h"

void bubbleSort(std::vector<int>& v) {
	int size = v.size();

	for (int i = 0; i < size; i++) {
		bool swapped = false;
		for (int j = 0; j < size - i - 1; j++) {
			if (v[j] > v[j + 1]) {
				int temp = v[j + 1];
				v[j + 1] = v[j];
				v[j] = temp;
				swapped = true;
			}
		}
		if (!swapped) {
			break;
		}
	}
}