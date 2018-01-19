#pragma once

void SelectionSort(int *arr, int size, bool ascend = true) {
	int temp;
	if (ascend) {
		for (int i = 0; i < size; i++) {
			for (int j = i; j < size; j++) {
				if (arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	} else {
		for (int i = 0; i < size; i++) {
			for (int j = i; j < size; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	
}

void BubbleSort(int *arr, int size, bool ascend = true) {
	bool swap;
	int temp;
	do {
		swap = false;
		for (int i = 0; i < size - 1; i++) {
			if (ascend == true) {
				if (arr[i] > arr[i + 1]) {
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					swap = true;
				}
			}
			else {
				if (arr[i] < arr[i + 1]) {
					temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					swap = true;
				}
			}
		}
		size = size - 1;
	} while (swap);
}
