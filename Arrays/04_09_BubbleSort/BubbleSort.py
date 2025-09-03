"""
Function: bubble_sort
---------------------
Sorts a list using the Bubble Sort algorithm.

Steps:
  1] Compare adjacent elements
  2] Swap if they are in the wrong order
  3] Repeat until the array is sorted

Optimized with a "swapped" flag to stop early if no swaps happen in a round.

Time Complexity: O(n^2) in worst/average case, O(n) in best case
Space Complexity: O(1) (In-place sorting)
"""

def bubble_sort(arr):
    n = len(arr)
    for i in range(1, n):
        swapped = False
        for j in range(n - i):
            if arr[j] > arr[j + 1]:
                # Swap
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True

        # If no swap → already sorted
        if not swapped:
            break


# Main
if __name__ == "__main__":
    arr = [25, 67, 39, -1, 3]

    bubble_sort(arr)

    print("Sorted Array:", arr)
