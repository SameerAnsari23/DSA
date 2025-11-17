#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    string longest = "";
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (i == 0 || s.size() > longest.size()) {
          longest = s;
        }
    }
    cout << longest << '\n';
    return 0;
}
