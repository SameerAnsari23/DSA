public class BubbleSort {

    /*
     * Function: bubbleSort
     * --------------------
     * Sorts an array using the Bubble Sort algorithm.
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
    public static void bubbleSort(int arr[]) {
        int n = arr.length;

        for (int i = 1; i < n; i++) {
            boolean swapped = false;

            for (int j = 0; j < n - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Swap
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }

            // If no swap → already sorted
            if (!swapped) {
                break;
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {25, 67, 39, -1, 3};

        bubbleSort(arr);

        System.out.print("Sorted Array: ");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
