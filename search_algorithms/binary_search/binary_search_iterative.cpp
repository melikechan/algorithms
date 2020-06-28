#include <iostream>
#include <conio.h>

using namespace std; 

// I think code is simple but some people may get confused, thus, I added comments to explain.
// Hoping it was useful and informative. ^v^

int binarySearchIterative(int* arr, int l, int r, int element) {
  while (l <= r) { //while array is sizeable (is reasonable)
    int mid = (r - l) / 2; //divide array to 2 parts 
    if (arr[mid] == element) return mid; //if at middle, return middle
    else if (arr[mid] > element) r = mid - 1; //if it's lesser than middle, it has to be at 1st subarray
    else l = mid + 1; //if it's greater, it has to be at 2nd subarray
  }
  return -1;
}

int main(void) {
  int size = 0, element = 0, ind = 0;
  cout << "Please enter the size of the array to binary search: ";
  cin >> size;
  cout << "Please enter the element to find: ";
  cin >> element;
  int arr[size + 1];
  cout << "Please enter the array: ";
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }
  ind = binarySearchIterative(arr, 0, size - 1, element);
  cout << element << " is found at index of " << ind << ".\n";
  cout << "Press any key to continue...";
  getch();
  return 0;
}
