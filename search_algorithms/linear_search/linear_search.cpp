#include <iostream>
#include <conio.h>

using namespace std;

int linearSearch (int* arr, int size, int element) {
  for (int ind = 0; ind < size; ++ind) {
    if (arr[ind] == element) return ind;
  }
  return -1;
}

int main(void) {
  int size, element, ind;
  cout << "Please enter the size of the array to linear search: ";
  cin >> size;
  cout << "Please enter the element to find: ";
  cin >> element;
  int arr[size + 1];
  cout << "Please enter the array: ";
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }
  ind = linearSearch(arr, size, element);
  cout << element << " is found at index of " << ind << ".\n";
  cout << "Press any key to continue...";
  getch();
  return 0;
}
