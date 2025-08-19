#include <iostream>
using namespace std;

int find(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low + 1; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 8;

    cout << "Missing number: " << find(arr, n) << endl;

    return 0;
}