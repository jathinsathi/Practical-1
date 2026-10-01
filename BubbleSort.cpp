#include <iostream>

// Function to perform Bubble Sort on an array
void bubbleSort(int arr[], int n) {
    bool swapped;
    
    // Outer loop for each pass
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        
        // Inner loop to compare adjacent elements
        // The last i elements are already in place, so we skip them
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements if they are in the wrong order
                std::swap(arr[j], arr[j + 1]);
                swapped = true; // Mark that a swap occurred
            }
        }
        
        // If no two elements were swapped by the inner loop, the array is sorted
        if (!swapped) {
            break;
        }
    }
}

// Function to print the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(data) / sizeof(data[0]);

    std::cout << "Original array:\n";
    printArray(data, size);

    // Call bubble sort
    bubbleSort(data, size);

    std::cout << "Sorted array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
