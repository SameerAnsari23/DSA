#include <iostream>
using namespace std;

long long factRec(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factRec(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factRec(n);
    return 0;
}
