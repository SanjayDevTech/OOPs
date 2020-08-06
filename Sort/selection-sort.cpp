/*
Selection sort
O(n2)
*/
#include <iostream>

#include "utils.h"

// Function declarations
void selection_sort(int*, int);

int find_min(int*, int, int);

// Driver function
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int arr[n];
    get_array(arr, n);
    initializer("selection sort");
    selection_sort(arr, n);
    print(arr, n);
}

// Function definitions
void selection_sort(int arr[], int n) {
    // Selection sort
    for (int i = 0; i < n; i++) {
        std::cout << "Pass: " << i+1 << std::endl;
        int min_index = find_min(arr, i, n);  // get the index of minimum
        if (min_index != i) {  // check minmum index is also the current index
            swap(arr[min_index], arr[i]);  // swap minimum value and current value
        }
    }
}

int find_min(int arr[], int from, int n) {
    int min_index = from;
    int min = arr[min_index];
    for (int i = from + 1; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index;
}