#include <iostream>
using namespace std;

long long dp[1000];

long long factMemo(int n) {
    if (n == 0 || n == 1)
        return 1;

    if (dp[n] != -1)
        return dp[n];

    return dp[n] = n * factMemo(n - 1);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
        dp[i] = -1;

    cout << factMemo(n);
    return 0;
}
