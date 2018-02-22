//================================================================================
// Name        : practical4.cpp
// Author      : a.mccaughey@ulster.ac.uk
// Version     : 1.0
// Description : practical 4 test program to utilise sort algorithms
//================================================================================

#include <string> // used to access string type
#include <cctype>
#include <ctime> // used to access clock_t and clock()

#include "Array.h"
#include "Sorter.h"

using namespace std;

// Test relative sort performances when sorting same random 
// number sequence of specified size. 
void testPerformance(int size) {
	clock_t start, finish;
	double time1 = 0.0;
	double time2 = 0.0;

	Sorter<int> data(size);
	data.fillRandom();

	Sorter<int> data1(1);
	data1 = data;

	Sorter<int> data2(1);
	data2 = data;

	Sorter<int> data3(1);
	data3 = data;

	Sorter<int> data4(1);
	data4 = data;

	// Selection Sort
	start = clock();
	data.selectionSort();
	finish = clock();
	time1 = finish - start;

	start = clock();
	data.selectionSort();
	finish = clock();
	time2 = finish - start;

	cout << "Selection sort Random/Sorted " << data.capacity() << " = "
		<< time1 << "/" << time2 << endl;

	//Insertion Sort
	start = clock();
	data1.insertionSort();
	finish = clock();
	time1 = finish - start;

	start = clock();
	data1.insertionSort();
	finish = clock();
	time2 = finish - start;

	cout << "Insertion sort Random/Sorted " << data.capacity() << " = "
		<< time1 << "/" << time2 << endl;

	//Shell Sort
	start = clock();
	data2.shellsort();
	finish = clock();
	time1 = finish - start;

	start = clock();
	data2.shellsort();
	finish = clock();
	time2 = finish - start;

	cout << "Shell sort Random/Sorted " << data.capacity() << " = "
		<< time1 << "/" << time2 << endl;

	//Merge Sort
	start = clock();
	data3.mergeSort();
	finish = clock();
	time1 = finish - start;

	start = clock();
	data3.mergeSort();
	finish = clock();
	time2 = finish - start;

	cout << "Merge sort Random/Sorted " << data.capacity() << " = "
		<< time1 << "/" << time2 << endl;

	//Quick Sort
	start = clock();
	data4.quickSort();
	finish = clock();
	time1 = finish - start;

	start = clock();
	data4.quickSort();
	finish = clock();
	time2 = finish - start;

	cout << "Quick sort Random/Sorted " << data.capacity() << " = "
		<< time1 << "/" << time2 << endl;
	cout << "\n";
}

// Determine the most frequent word in the supplied text file 'words.txt'
// print the word and its frequency
void wordFrequency() {
	Sorter<string> word(1);
	word.loadFile("words.txt");

	word.quickSort();

	for (int i = 0; i < word.capacity(); i++) {
		
		if (word[i] == word[i+1]) {

		}
	}
}


	// Main method.
	int main() {
		wordFrequency();

		// ---------------------------------------------------
		cout << endl << "Press enter to quit";
		cin.get();
		return 0;
	}