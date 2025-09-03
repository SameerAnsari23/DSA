#include <bits/stdc++.h>
using namespace std;

/*
 * Function: bubbleSort
 * --------------------
 * Sorts a vector using the Bubble Sort algorithm.
 *
 * Steps:
 *   1] Compare adjacent elements
 *   2] Swap if they are in the wrong order
 *   3] Repeat until the array is sorted
 *
 * Optimized with a "swapped" flag to stop early if no swaps happen in a round.
 *
 * Time Complexity: O(n^2) in worst/average case, O(n) in best case
 * Space Complexity: O(1) (In-place sorting)
 */
void bubbleSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        // For round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++) {
            // Process elements till (n - i)th index
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no swapping happened → array is already sorted
        if (swapped == false) {
            break;
        }
    }
}

int main() {
    // Input array
    int arr[] = {25, 67, 39, -1, 3};
    int n = arr.size();

    // Call bubble sort
    bubbleSort(arr, n);

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
