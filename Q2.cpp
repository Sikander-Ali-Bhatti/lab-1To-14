#include <iostream>
#include <vector>

std::vector<int> linearSearchWithDuplicates(const int arr[], int size, int target) {
    std::vector<int> indices;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    int arr[] = {4, 2, 8, 4, 6, 4, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;
    std::vector<int> result = linearSearchWithDuplicates(arr, size, target);
    if (result.empty()) {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    } else {
        std::cout << "Element " << target << " found at indices: ";
        for (int index : result) {
            std::cout << index << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}