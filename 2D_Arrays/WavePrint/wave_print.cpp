#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][4] = {
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0}
    };
    for (int col = 0; col < 4; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < 3; row++) {
                cout <<arr[row][col] << " ";
            }
        }else {
            for (int row = 2; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
    return 0;
    
}
