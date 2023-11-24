#include <iostream>
#include <chrono>

#include "sort.h"

void sortVector(std::vector<int> v, std::string sortType);

int main() {
	std::vector<int> v10, v50, v100, v500, v1000, v5000;

	for (int i = 0; i < 5000; i++) {
		if (i < 10) {
			v10.push_back(rand() % 100);
		}
		if (i < 50) {
			v50.push_back(rand() % 100);
		}
		if (i < 100) {
			v100.push_back(rand() % 100);
		}
		if (i < 500) {
			v500.push_back(rand() % 100);
		}
		if (i < 1000) {
			v1000.push_back(rand() % 100);
		}
		v5000.push_back(rand() % 100);
	}

	std::cout << "Sorting unsorted" << std::endl << std::endl;

	sortVector(v10,		"insertion sort");
	sortVector(v50,		"insertion sort");
	sortVector(v100,	"insertion sort");
	sortVector(v500,	"insertion sort");
	sortVector(v1000,	"insertion sort");
	sortVector(v5000,	"insertion sort");

	sortVector(v10,		"selection sort");
	sortVector(v50,		"selection sort");
	sortVector(v100,	"selection sort");
	sortVector(v500,	"selection sort");
	sortVector(v1000,	"selection sort");
	sortVector(v5000,	"selection sort");

	sortVector(v10,		"bubble sort");
	sortVector(v50,		"bubble sort");
	sortVector(v100,	"bubble sort");
	sortVector(v500,	"bubble sort");
	sortVector(v1000,	"bubble sort");
	sortVector(v5000,	"bubble sort");

	sortVector(v10,		"quicksort");
	sortVector(v50,		"quicksort");
	sortVector(v100,	"quicksort");
	sortVector(v500,	"quicksort");
	sortVector(v1000,	"quicksort");
	sortVector(v5000,	"quicksort");

	sortVector(v10,		"mergesort");
	sortVector(v50,		"mergesort");
	sortVector(v100,	"mergesort");
	sortVector(v500,	"mergesort");
	sortVector(v1000,	"mergesort");
	sortVector(v5000,	"mergesort");

	return 0;
}

void sortVector(std::vector<int> v, std::string sortType) {
	std::cout << "Sort type: " << sortType << std::endl;
	std::cout << "Vector size: " << v.size() << std::endl;

	std::chrono::steady_clock::time_point begin;
	std::chrono::steady_clock::time_point end;

	if (sortType == "insertion sort") {
		begin = std::chrono::steady_clock::now(); 
		insertionSort(v);
		end = std::chrono::steady_clock::now(); 
	}
	else if (sortType == "selection sort") {
		begin = std::chrono::steady_clock::now();
		selectionSort(v);
		end = std::chrono::steady_clock::now();
	}
	else if (sortType == "bubble sort") {
		begin = std::chrono::steady_clock::now();
		bubbleSort(v);
		end = std::chrono::steady_clock::now();
	}
	else if (sortType == "quicksort") {
		begin = std::chrono::steady_clock::now();
		quickSort(v);
		end = std::chrono::steady_clock::now();
	}
	else if (sortType == "mergesort") {
		begin = std::chrono::steady_clock::now();
		mergeSort(v);
		end = std::chrono::steady_clock::now();
	}

	std::cout << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() << " microseconds" << std::endl;
}