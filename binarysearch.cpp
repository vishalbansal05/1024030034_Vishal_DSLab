#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        else if (arr[mid] < target) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int data[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 12;

    int result = binarySearch(data, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
