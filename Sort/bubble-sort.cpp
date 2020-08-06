/*
Bubble sort
O(n2)
*/
#include<iostream>
#include "utils.h"

// Function declarations
void bubble_sort(int*, int);

// Driver function
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int arr[n];
    get_array(arr, n);
    initializer("bubble sort");
    bubble_sort(arr, n);
    print(arr, n);
}

// Function definitions
void bubble_sort(int arr[], int n) {
    // Bubble sort
    for (int pass = 1; pass < n; pass++) {
        std::cout << "Pass: " << pass << std::endl;
        for (int comp = 1; comp <= n-pass; comp++) {
            std::cout << "Comp => " << comp << " ";
            if (arr[comp] < arr[comp-1]) {
                swap(arr[comp], arr[comp-1]);
            }
        }
        std::cout << std::endl;
    }
}