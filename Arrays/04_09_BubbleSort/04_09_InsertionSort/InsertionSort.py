"""
Function: insertion_sort
------------------------
Sorts a list using the Insertion Sort algorithm.

Steps:
  1] Pick the current element (key)
  2] Compare it with elements before it
  3] Shift elements greater than key one position ahead
  4] Insert the key at its correct position

Time Complexity: O(n^2) in worst/average case, O(n) in best case
Space Complexity: O(1) (In-place sorting)
"""

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1

        # Shift elements greater than key
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1

        # Place key at correct position
        arr[j + 1] = key


# Main
if __name__ == "__main__":
    arr = [25, 67, 39, -1, 3]
    insertion_sort(arr)
    print("Sorted Array:", arr)
