#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int delItem;

    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the item to delete: ";
    cin >> delItem;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == delItem) {
            for (int j = i; j < SIZE - 1; j++) {
                arr[j] = arr[j + 1];
            }
            arr[SIZE - 1] = 0; 
            break;
        }
    }

  
    cout << "Array after deletion: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
