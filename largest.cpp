#include <iostream>
using namespace std;

int findThirdLargest(int arr[], int n) {
    if (n < 3) {
        cout << "Array must contain at least three elements." << endl;
        return -1; // or some error code
    }

    int first = arr[0], second = -1, third = -1; // Initialize second and third to -1 or suitable values

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    if (third == -1) {
        cout << "There is no third largest element." << endl;
        return -1; // or some error code
    }

    return third;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int thirdLargest = findThirdLargest(arr, n);
    if (thirdLargest != -1) {
        cout << "The third largest element is: " << thirdLargest << endl;
    }
    return 0;
}