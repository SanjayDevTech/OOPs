/*
Bubble sort
O(n2)
*/
#include<iostream>

// Function declarations
void initializer(const char*);
void swap(int&, int&);
void bubble_sort(int*, int);
void print(int*, int);

// Driver function
int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    initializer("bubble sort");
    bubble_sort(arr, n);
    print(arr, n);
}

// Function definitions
void initializer(const char* title) {
    // Just for fun
    std::cout << "Performing " << title << ".." << std::endl;
}

void swap(int &a, int &b) {
    // swap function
    int temp = a;
    a = b;
    b = temp;
}

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

void print(int arr[], int n) {
    // Print the array
    std::cout << "[";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i];
        if(i < n-1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}