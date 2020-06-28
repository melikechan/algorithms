#include <iostream>
#include <conio.h>

using namespace std; 

int binarySearch(int* arr, int l, int r, int element) {
  int mid = (r - l) / 2;
  if (arr[mid] == element) return mid;
  else if (arr[mid] > element) return binarySearch(arr, l, mid - 1, element);
  else return binarySearch(arr, mid + 1, r, element);
  return -1;
}

int main(void) {
  int size, element, ind;
  cout << "Please enter the size of the array to binary search: ";
  cin >> size;
  cout << "Please enter the element to find: ";
  cin >> element;
  int arr[size + 1];
  cout << "Please enter the array: ";
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }
  ind = binarySearch(arr, 0, size - 1, element);
  cout << element << " is found at index of " << ind << ".\n";
  cout << "Press any key to continue...";
  getch();
  return 0;
}
