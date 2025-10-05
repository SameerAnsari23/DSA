#include <bits/stdc++.h>
using namespace std;

void pairSum(int arr[], int n, int k) {
    sort(arr, arr + n); // sort the array
    int s = 0;
    int e = n - 1;
    bool found = false;

    while (s < e) {
        int sum = arr[s] + arr[e];

        if (sum == k) {
            found = true;
            s++;
            e--;
        }
        else if (sum < k) {
            s++; // need a bigger sum
        }
        else {
            e--; // need a smaller sum
        }
    }

    if (!found)
        cout << "No pairs found!" << endl;
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    pairSum(arr, n, k);

    return 0;
}
