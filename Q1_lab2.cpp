#include <iostream>
int findLargest(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
int main() {
    const int n = 5;
    int arr[n] = {10, 25, 5, 45, 55};
    int largestValue = findLargest(arr, n);
    
    std::cout << "The largest value in the array is: " << largestValue << std::endl;
    return 0;
}