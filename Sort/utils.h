#pragma once

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

void get_array(int arr[], int n) {
    // Get input from user
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
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