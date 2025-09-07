public class InsertionSort {

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
     * Time Complexity: O(n^2) in worst/average case, O(n) in best case
     * Space Complexity: O(1) (In-place sorting)
     */
    public static void insertionSort(int arr[]) {
        int n = arr.length;

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

    public static void main(String[] args) {
        int arr[] = {25, 67, 39, -1, 3};

        insertionSort(arr);

        System.out.print("Sorted Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
