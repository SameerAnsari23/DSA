#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][], int rows, int cols) {
    int startRow = 0, endRow = rows - 1;
    int startCol = 0, endCol = cols - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // top row
        for (int j = startCol; j <= endCol; j++) {
            cout << arr[startRow][j] << " ";
        }
        startRow++;

        // right column
        for (int i = startRow; i <= endRow; i++) {
            cout << arr[i][endCol] << " ";
        }
        endCol--;

        // bottom row
        if (startRow <= endRow) {
            for (int j = endCol; j >= startCol; j--) {
                cout << arr[endRow][j] << " ";
            }
            endRow--;
        }

        // left column
        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                cout << arr[i][startCol] << " ";
            }
            startCol++;
        }
    }

    cout << endl;
}

int main() {
    int arr[3][4] = {
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0}
    };
    int rows = 3, cols = 4;

    spiralPrint(arr, rows, cols);

    return 0;
}
