#include <iostream>
void searchByIndex(int arr[], int n, int index) {
    if (index < 0 || index >= n) {
        std::cout << "Index out of bounds." << std::endl;
    } else {
        std::cout << "Element at index " << index << ": " << arr[index] << std::endl;
    }
}
void searchByValue(int arr[], int n, int value) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            std::cout << "Element " << value << " found at index " << i << std::endl;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Element " << value << " not found in the array." << std::endl;
    }
}
int main() {
    int arr[] = {15, 25, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int choice;
    std::cout << "Choose search method:\n1. Search by index\n2. Search by value\n";
    std::cin >> choice;
    if (choice == 1) {
        int index;
        std::cout << "Enter index (0 to " << n - 1 << "): ";
        std::cin >> index;
        searchByIndex(arr, n, index);
    } else if (choice == 2) {
        int value;
        std::cout << "Enter value to search: ";
        std::cin >> value;
        searchByValue(arr, n, value);
    } else {
        std::cout << "Invalid " << std::endl;
    }
    return 0;
}