#include <iostream>
void addArrays(int arr1[], int arr2[], int result[], int n) {
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
int main() {
    const int n = 5;
    int arr1[n] = {1, 2, 3, 4, 5};
    int arr2[n] = {5, 4, 3, 2, 1};
    int result[n];
    addArrays(arr1, arr2, result, n);
    std::cout << "Array 1: ";
    printArray(arr1, n);
    std::cout << "Array 2: ";
    printArray(arr2, n);
    std::cout << "Resulting Array (sum): ";
    printArray(result, n);
    return 0;
}