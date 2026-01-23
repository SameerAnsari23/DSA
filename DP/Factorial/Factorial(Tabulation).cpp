#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long dp[n + 1];
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i] = i * dp[i - 1];
    }

    cout << dp[n];
    return 0;
}
