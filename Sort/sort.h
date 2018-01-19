#pragma once

void SelectionSort(int *arr, int size, bool ascend = true) {
	int temp;
		for (int i = 0; i < size; i++) {
			for (int j = i; j < size; j++) {
				if (ascend) {
					if (arr[i] > arr[j]) {
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
				else {
					if (arr[i] < arr[j]) {
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
				
			}
		}
	
}
