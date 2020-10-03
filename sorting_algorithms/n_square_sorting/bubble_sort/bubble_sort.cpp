#include <iostream>

using namespace std;

int main(void) {
  int size_of_arr = 0, temp = 0;
  bool swap = false;
  cout << "Please input size of the array you want to bubble sort:";
  cin >> size_of_arr;
  int arr[size_of_arr];
  cout << "Please enter the array: ";
  for (int i = 0; i < size_of_arr; ++i) cin >> arr[i];

  do {
    swap = false;
    for (int j = 0; j < size_of_arr - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        cout << "Swapping" << arr[j] << " " << arr[j + 1] << "\n";
        swap = true;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  } while (swap);
  cout << "Final array:  "<< "\n";
  cout << "--------------" <<  "\n";
  for (int i = 0; i < size_of_arr; ++i) cout << arr[i] << " ";
  
  cout << "Press any key to continue...";
  getchar();
  return 0;
}
