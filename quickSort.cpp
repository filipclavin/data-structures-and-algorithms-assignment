#include "sort.h"

void quickSort(std::vector<int>& v) {
	quickSort(v, 0, v.size() - 1);
}

void quickSort(std::vector<int>& v, int leftIndex, int rightIndex) {
	if (leftIndex >= rightIndex) return;

	int pivotIndex = partition(v, leftIndex, rightIndex);
	quickSort(v, leftIndex, pivotIndex - 1);
	quickSort(v, pivotIndex + 1, rightIndex);
}

int partition(std::vector<int>& v, int leftIndex, int rightIndex) {
	int pivotValue = v[rightIndex];

	int i = leftIndex;

	for (int j = leftIndex; j < rightIndex; j++) {
		if (v[j] <= pivotValue) {
			if (j > i) swap(&v[i], &v[j]);
			i++;
		}
	}

	swap(&v[i], &v[rightIndex]);

	return i;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
