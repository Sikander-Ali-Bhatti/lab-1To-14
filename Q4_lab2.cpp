#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter THE Array: ";
    cin >> size;
    int arry1[size];
    int arry2[size + 1];
    cout << "Enter  the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arry1[i];
    }
    int item, loc;
    cout << "Enter the item to insert: ";
    cin >> item;
    cout << "Enter the location (index) to insert the item: ";
    cin >> loc;
    if (loc < 0 || loc > size) {
        cout << "Invalid location!" << endl;
        return 1;
    }
    for (int i = 0; i < loc; i++) {
        arry2[i] = arry1[i];
    }
    arry2[loc] = item;
    for (int i = loc; i < size; i++) {
        arry2[i + 1] = arry1[i];
    }
    cout << "Array after insertion: ";
    for (int i = 0; i < size + 1; i++) {
        cout << arry2[i] << " ";
    }
    cout << endl;
    return 0;
}