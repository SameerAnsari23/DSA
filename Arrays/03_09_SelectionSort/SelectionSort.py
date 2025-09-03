"""
Function: selection_sort
------------------------
Sorts a list using the Selection Sort algorithm.

Steps:
  1] Assume the minimum element is at index i
  2] Find the actual minimum element in the unsorted part
  3] Swap the found minimum element with the first element of unsorted part and repeat above steps

Time Complexity: O(n^2)
Space Complexity: O(1) (In-place sorting)
"""

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        
        # Assume the minimum element is at index i
        mini = i

        # Find the actual minimum element in the unsorted part
        for j in range(i + 1, n):
            if arr[j] < arr[mini]:
                mini = j

        # Swap the found minimum element with the first element of unsorted part
        arr[i], arr[mini] = arr[mini], arr[i]


# Main function
if __name__ == "__main__":
    # Input list
    arr = [25, 67, 39, -1, 3]

    # Call selection sort
    selection_sort(arr)

    # Print sorted list
    print("Sorted Array:", arr)
