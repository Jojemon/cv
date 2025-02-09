// C program to implement iterative Binary Search
#include <stdio.h>

// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int mid = (l + r) / 2;

		// Check if x is present at mid
		if (arr[mid] == x)
			return mid;

		// If x greater, ignore left half
		if (arr[mid] < x)
			l = mid + 1;

		// If x is smaller, ignore right half
		else
			r = mid - 1;
	}

	// If we reach here, then element was not present
	return 0;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 4;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == 0) ? printf("Element is not present in array"): printf("Element is present at index %d",result);
	return 0;
}

