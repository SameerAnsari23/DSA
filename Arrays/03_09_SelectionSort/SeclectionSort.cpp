#include <bits/stdc++.h>
using namespace std;

/* 
 * Function: selectionSort
 * -----------------------
 * Sorts an array using the Selection Sort algorithm.
 *
 * Steps:
 *   1] Assume the minimum element is at index i
 *   2] Find the actual minimum element in the unsorted part
 *   3] Swap the found minimum element with the first element of unsorted part and repeat above steps
 *
 * Time Complexity: O(n^2)
 * Space Complexity: O(1) (In-place sorting)
 */
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        // Assume the minimum element is at index i
        int mini = i;

        // Find the actual minimum element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }

        // Swap the found minimum element with the first element of unsorted part
        swap(arr[i], arr[mini]);
    }
}

int main() {
    // Input array
    int arr[] = {25, 67, 39, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call selection sort
    selectionSort(arr, n);

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
