#include <bits/stdc++.h>
using namespace std;

void printSubarrays(int arr[], int n) {
  
    // starting index
    for (int start = 0; start < n; start++) {
      
        // ending index
        for (int end = start; end < n; end++) {
          
            // Print elements from start to end
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printSubarrays(arr, n);

    return 0;
}
