#include <iostream>
#include <ctime> 
#include <cstdlib>

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

int exponentialSearch(int arr[], int n, int target) {
  if (arr[0] == target) {
    return 0;
  }
  int i = 1;
  while (i < n && arr[i] <= target) {
    i *= 2;
  }
  return RecBinary(arr, i / 2, std::min(i, n - 1), target);
}

int main() {
	int arr[] = {4, 2, 3, 5, 6};
	int n = 6;
	int target = 6;
    int index = exponentialSearch(arr, n, target);
    if (index == -1) {
        std::cout << "Number not found" << std::endl;
    } else {
        std::cout << "Number found at index " << index << std::endl;
    }
  return 0;
}

