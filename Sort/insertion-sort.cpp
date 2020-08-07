/*
Insertion sort
O(n2)
*/
#include <iostream>

#include "utils.h"

// Function declarations
void insertion_sort(int*, int);

// Driver function
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int arr[n];
    get_array(arr, n);
    initializer("insertion sort");
    insertion_sort(arr, n);
    print(arr, n);
}

// Function definitions
void insertion_sort(int arr[], int n) {
    // Insertion sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int key_index = i;
        for (int rev = i - 1; rev >= 0; rev--) {
            if (arr[rev] > key) {
                swap(arr[rev], arr[key_index]);
                key_index = rev;
            } else {
                break;
            }
        }
    }
}
