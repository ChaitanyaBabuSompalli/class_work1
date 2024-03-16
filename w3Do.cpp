// Title: Bubble Sort Algorithm Implementation in C++ (Descending Order)

#include <iostream>  // Including the input/output stream library for console I/O

int main() {
    // Initialize an array with integer values
    int a[] = { 8, 7, 6, 5, 2, 4, 1, 3, 9 };

    // Calculate the length of the array
    int arrayLength = sizeof(a) / sizeof(a[0]);

    // Bubble sort algorithm to sort the array in descending order
    for (int i = 0; i < arrayLength - 1; i++) {
        // Iterate through the array up to the last but one element
        for (int j = 0; j < arrayLength - 1 - i; j++) {
            // Compare adjacent elements and swap if necessary to sort in descending order
            if (a[j] < a[j + 1]) {
                std::swap(a[j], a[j + 1]); // Use std::swap for simplicity
            }
        }
    }

    // Print the sorted array in descending order
    std::cout << "Sorted Array (Descending Order): ";
    for (int i = 0; i < arrayLength; i++) {
        std::cout << a[i] << " ";   // Output each element of the sorted array
    }

    // Indicating successful completion of the program
    return 0;
}
