// Assignment 1: Alternating disks problem, left-to-right algorithm   
// XX YY ( YOU NEED TO COMPLETE YOUR NAME )  
// Given 2n alternating disks (dark, light) the program reads the number of single color disks 
// (light or dark), arranges the disks in the correct order and outputs the number of swaps 
// INPUT: a positive integer n and a list of 2n disks of alternating colors dark-light, starting with dark 
// OUTPUT: a list of 2n disks, the first n disks are light, the next n disks are dark,  
// and an integer m representing the number of moves to move the dark ones after the light ones  

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>
using namespace std;

// YOU NEED TO IMPLEMENT THIS FUNCTION
// function to print the list of disks, given the number of single color disks and the actual list  
// n represents the number of single color disks 
// disks represents the list of disks (index 0 being the first disk) where
// L = a light color disks 
// D = a dark color disks
void print_disks(vector<char>& disks) {
	for (int i = 0; i < disks.size(); i++) {
		cout << disks[i] << " ";
	}
	cout << endl;
}


int main() {
	// Store the number of single color disks, times that by two to get total number of disks of both dark and light disks
	int n;

	// Store the number of disks, both dark and light
	//char *disks;
	vector<char> vdisks;

	// display the header 
	cout << endl << "CPSC 335-x - Programming Assignment #1" << endl;
	cout << "The alternating disks problem: left-to-right algorithm" << endl;
	cout << "Enter the number of single color disks (light or dark)" << endl;

	// read the number of disks (either dark or light)
	cin >> n;

	// allocate space for the disks                                                                                                                                                                        
	//disks = new char[2 * n];


	// set the initial configurations for the disks to alternate 
	/*
	for (int i = 0; i < n; i++) {
	disks[2 * i] = '0';
	disks[2 * i + 1] = '1';
	}

	*/

	for (int i = 0; i < 2 * n; i++) {
		if (i % 2 == 0) {
			vdisks.push_back('D');
		}
		else {
			vdisks.push_back('L');
		}
	}

	// print the initial configuration of the list of disks  
	cout << "Initial configuration" << endl;
	print_disks(vdisks);

	//int j = 0;
	char temp;
	int swap = 0;
	int m = 0;

	// loop to push light one before the darks ones 
	for (int counter = 0;; counter++) {

		if (counter % 2 == 0) {

			// Going left to right
			for (int i = 0, j = 1; j < vdisks.size(); i++, j++) {

				// If ith element is dark and i++th element is light => perform swap, else do nothing
				if (vdisks[i] == 'D' && vdisks[j] == 'L') {
					vdisks[i] = 'L';
					vdisks[j] = 'D';
					swap++;
					m++;
				}
			}// End for loop

		}else{

			// Going right to left
			for (int k = vdisks.size() - 1, l = k - 1; l > -1; k--, l--) {
				if (vdisks[k] == 'L' && vdisks[l] == 'D') {
					vdisks[l] = 'L';
					vdisks[k] = 'D';
					swap++;
					m++;
				}
			}// End for loop

		}// End if-else

		// If swaps have been performed, reset the loop 
		if (swap < 1) {
			break;
		}

		// Reset swap
		swap = 0;

	}

			


	// after shuffling them 
	cout << "After moving darker ones to the right" << endl;


	print_disks(vdisks);
	// print the total number of moves 
	cout << "Number of swaps is " << m << endl;
	// de-allocate the dynamic memory space 
	//delete[] disks;
	return EXIT_SUCCESS;
}
