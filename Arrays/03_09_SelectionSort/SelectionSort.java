public class SelectionSort {

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
    public static void selectionSort(int arr[]) {
        int n = arr.length;

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
            int temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
        }
    }

    public static void main(String[] args) {
        // Input array
        int arr[] = {25, 67, 39, -1, 3};

        // Call selection sort
        selectionSort(arr);

        // Print sorted array
        System.out.print("Sorted Array: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
