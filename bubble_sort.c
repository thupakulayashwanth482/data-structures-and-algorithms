// Optimized bubble sort in C

//bubble_sort
//B172173 thupakula yashwanth

#include <stdio.h>

void bubbleSort(int arrayay[], int size) {
  for (int step = 0; step < size - 1; ++step) {

    // Swapped keeps track of swapping
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {

      if (arrayay[i] > arrayay[i + 1]) {
        
        // Swap if greater is at the rear position
        int temp = arrayay[i];
        arrayay[i] = arrayay[i + 1];
        arrayay[i + 1] = temp;
        swapped = 1;
      }
    }

    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}

// Function to print an array

void printarrayay(int arrayay[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arrayay[i]);
  }
  printf("\n");
}
int main() {
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarrayay(data, size);
}

					//B172193
