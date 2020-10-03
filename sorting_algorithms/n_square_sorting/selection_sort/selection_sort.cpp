#include <iostream>

using namespace std;

int main(void) {
  int size_of_arr = 0, temp = 0, smallest = 0, ind = 0;
  cout << "Please input size of the array you want to do selection sort:";
  cin >> size_of_arr;
  int arr[size_of_arr];
  cout << "Please enter the array: ";
  for (int i = 0; i < size_of_arr; ++i) cin >> arr[i];

  for (int pivot = 0; pivot < size_of_arr - 1; ++pivot) {
    smallest = arr[pivot];
    ind = pivot;
    for (int search = pivot + 1; search < size_of_arr; ++search) {
      cout << "Smallest index was: " << ind << "\n";

      if (arr[search] < smallest) {
        smallest = arr[search];
        ind = search;
        cout << "Smallest index changed into: " << ind << "\n";
      }
    }
    temp = arr[pivot];
    arr[pivot] = arr[ind];
    arr[ind] = temp;
  }
  cout << "Final array:  "<< "\n";
  cout << "--------------" <<  "\n";
  for (int i = 0; i < size_of_arr; ++i) cout << arr[i] << " ";

  return 0;
}
