#include <iostream>

using namespace std;


/* This file is intended to act as a (sort of) tutorial on insertion sort.
 * Insertion sort takes O(n) time in the best case scenario, and O(n squared) 
 * in the worst case.
 * It's advantages are:
 * 		- It is very simple to implement.
 * 		
 * 		- It works in place. I.e. only requires a constant amount O(1) 
 * 		additional space, regardless of how big the array (or dataset) 
 * 		might be. 
 * 		
 * 		- Despite technically being an O(n squared) algorithm, it is 
 * 		quite a lot faster in practice than other algorithms with the 
 * 		same time complexity (most common of which are bubble sort and 
 * 		selection sort).
 * 
 * See the Wikipedia page for further information.  
 */

int main(void) {
	/* We first need to get the array to be sorted. */
	
	/* Get the array's size. */
	int arr_size = 0;
	
	cout << "Size of the array to be sorted: ";
	cin >> arr_size;
	
	/* Now we read each element of the array. */
	cout << "Please enter each element of the array, seperated by spaces.\n";
	int arr[arr_size];
	
	for (int i = 0; i < arr_size; i++) {
		cin >> arr[i];
	}
	
	
	/* This is where the sorting algorithm comes. 
	 * Keep in mind, we need to start iterating from the *second* element. 
	 */
	
	for (int i = 1; i < arr_size ; i++){
		/* The idea is, we take the current element (i) , and iterate back to the start of the 
		 * array (j). On each iteration of the inner loop, if j is bigger than i, 
		 * we swap i and j, and otherwise, break.
		 */
		 
		for (int j = i; (j > 0) && (arr[j - 1] > arr[j]) ; j--) {
			/* If the body of this loop executes at all, we need to swap arr[j] and arr[j-1].*/
			int temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
		}
	}
	
	
	/* The array has been sorted, and we can print it. */
	cout << "\nHere is the result: \n";
	for (int i = 0; i < arr_size ; i++) {
		cout << arr[i] << " "; 
	}
	
	cout << "\nPress enter to continue." << endl;	
	getchar();	getchar();
	return 0;
};

