#include <iostream>
using namespace std;

int dp[1000];

int fibMemo(int n) {
    if (n <= 1)
        return n;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = fibMemo(n - 1) + fibMemo(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    for (int i = 0; i < n; i++)
        cout << fibMemo(i) << " ";

    return 0;
}
