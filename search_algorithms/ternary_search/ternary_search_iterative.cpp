#include <iostream>
#include <conio.h>

using namespace std;

// I think code is simple but some people may get confused, thus, I added comments to explain.
// Hoping it was useful and informative. ^v^

int ternarySearchIterative (int* arr, int l, int r, int elem) {
  while (l <= r) { //while array is sizeable (has a proper left and right)
    int lowMid = l + (r - l) / 3; //lower mid is at 1/3 of array
    int highMid = r - (r - l) / 3; //upper mid is at 2/3 of array
    if (arr[lowMid] == elem) return lowMid; 
    if (arr[highMid] == elem) return highMid;
    else if (arr[lowMid] > elem) {
      r = lowMid - 1; //set right to 1/3 - 1 
      //because we looked at 1/3 but if it's smaller than 1/3, it has to be at 1st subarray
    }
    else if (elem > arr[highMid]) {
      l = highMid + 1; //set left to 2/3 + 1
      //also we looked at 2/3 but if it's greater than 2/3, it has to be at 3rd subarray
    }
    else {
      l = lowMid + 1; //set left to 1/3 + 1
      r = highMid - 1; //set right to 2/3 - 1
      //if it's greater than 1/3 but lesser than 2/3, it has to be at 2nd subarray
    }
  }
  return -1;
}

int main(void) {
  int size = 0 , element = 0, ind = 0;
  cout << "Please enter the size of the array to ternary search: ";
  cin >> size;
  cout << "Please enter the element to find: ";
  cin >> element;
  int arr[size + 1];
  cout << "Please enter the array: ";
  for (int i = 0; i < size; ++i) {
    cin >> arr[i];
  }
  ind = ternarySearchIterative(arr, 0, size - 1, element);
  cout << element << " is found at index of " << ind << ".\n";
  cout << "Press any key to continue...";
  getch();
  return 0;
}
