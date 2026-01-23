#include <iostream>
using namespace std;

int fibRec(int n) {
    if (n <= 1)
        return n;
    return fibRec(n - 1) + fibRec(n - 2);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << fibRec(i) << " ";

    return 0;
}
