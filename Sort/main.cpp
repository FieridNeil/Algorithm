#include <iostream>
#include "sort.h"

using namespace std;

int main() {
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

	return 0;
}
