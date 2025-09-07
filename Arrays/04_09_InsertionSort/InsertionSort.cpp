#include <iostream>
using namespace std;

/*
 * Function: insertionSort
 * -----------------------
 * Sorts an array using the Insertion Sort algorithm.
 *
 * Steps:
 *   1] Pick the current element (key)
 *   2] Compare it with elements before it
 *   3] Shift elements greater than key one position ahead
 *   4] Insert the key at its correct position
 *
 * Time Complexity: O(n^2) in worst/average case, O(n) in best case (already sorted)
 * Space Complexity: O(1) (In-place sorting)
 */
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Place key at correct position
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {25, 67, 39, -1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
