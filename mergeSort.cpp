#include "sort.h"

void merge(std::vector<int>& v, std::vector<int>& left, std::vector<int>& right);

void mergeSort(std::vector<int>& v) {
	int size = v.size();

	if (size < 2) {
		return;
	}

	int mid = size / 2;

	std::vector<int> left;
	std::vector<int> right;

	for (int i = 0; i < mid; i++) {
		left.push_back(v[i]);
	}

	for (int i = mid; i < size; i++) {
		right.push_back(v[i]);
	}

	mergeSort(left);
	mergeSort(right);

	merge(v, left, right);
}

void merge(std::vector<int>& v, std::vector<int>& left, std::vector<int>& right) {
	std::vector<int> result;

	while (left.size() > 0 && right.size() > 0) {
		if (left[0] <= right[0]) {
			result.push_back(left[0]);
			left.erase(left.begin());
		}
		else {
			result.push_back(right[0]);
			right.erase(right.begin());
		}
	}

	while (left.size() > 0) {
		result.push_back(left[0]);
		left.erase(left.begin());
	}

	while (right.size() > 0) {
		result.push_back(right[0]);
		right.erase(right.begin());
	}
}