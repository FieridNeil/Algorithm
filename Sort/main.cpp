#include <iostream>
#include "sort.h"

using namespace std;

int main() {
	cout << "Selection Sort" << endl;
	int a[10] = { 35,57,12,20,15,61,3,63,46,10 };
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	
	SelectionSort(a, 10, false);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Bubble Sort" << endl;
	int b[10] = { 35,57,12,20,15,61,3,63,46,10 };
	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;

	BubbleSort(b, 10, false);

	for (int i = 0; i < 10; i++) {
		cout << b[i] << " ";
	}
	cout << endl;




	return 0;
}
