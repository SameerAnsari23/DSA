#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int sum = 0;
    // int maxi = INT_MIN;

    // for(int i = 0; i < n; i++) {
    //     int sum = 0;
    //     for(int j = i; j < n; j++) {
    //         sum += arr[j];
    //         maxi = max(maxi, sum);
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // for(int k = i; k <= j; k++)
            cout << arr[j] << " ";
            // cout<<endl;
        }
        cout << endl;
    }

    // for(int i = 0; i < n; i++) {
    //     sum += arr[i];
    //     if (sum < 0) sum = 0;
    //     maxi = max(maxi, sum);
    // }
    // cout << maxi;
    return 0;
}
