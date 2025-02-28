#include <iostream>
void deleteFromTop(int arr[], int& n) {
    if (n <= 0) {
        std::cout << "Array is empty. No item to delete." << std::endl;
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
}