#include <iostream>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 34, 45, 65, 78, 89, 92};
    int key = 45;
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = linearSearch(arr, n, key);

    if(index != -1) {
        std::cout << "Element found at index " << index << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}

