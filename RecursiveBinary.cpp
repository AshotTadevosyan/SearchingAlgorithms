#include <iostream>

int RecBinary(int arr[], int left, int right, int target) {
	while (left <= right) {
		int mid = (right + left) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			return RecBinary(arr, mid + 1, right, target);
		}
		else {
			return RecBinary(arr, left, mid - 1, target);
		}
	}
	return -1;
}

int main() {
	int arr[] = {12, 23, 34, 45, 67, 79, 98};
	int n = sizeof(arr) / sizeof(arr[1]);
	int target = 12;
	
	int index = RecBinary(arr, 0, n - 1, target);
	
	if (index != -1) {
		std::cout << "Element found at index " << index << std::endl;
	}
	else {
		std::cout << "Element not found" << std::endl;
	}
	return 0;
}

