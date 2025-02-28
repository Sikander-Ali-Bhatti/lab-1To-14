#include <iostream>
void deleteFromBottom(int arr[], int& n) {
    if (n <= 0) {
        std::cout << "Array empty. No item to delete." << std::endl;
        return;
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
    int arr[] = {10, 20, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    printArray(arr, n);
    deleteFromBottom(arr, n);
    std::cout << "Array after delete from bottom: ";
    printArray(arr, n);
    return 0;
}