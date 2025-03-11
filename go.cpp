#include <iostream>

int findSmallest(const int arr[], int n) {
    if (n == 0) {
        return INT_MAX; // or a sentinel value if the array can't be empty
    }

    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    int arr[] = {3, 5, 1, 7, 2, 9, 4};
    int n = 7; // length of the array

    int smallestNumber = findSmallest(arr, n);
    std::cout << "The smallest number is: " << smallestNumber << std::endl;
    return 0;
}