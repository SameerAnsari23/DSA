#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declaration
    int arr1[3][4];

    // Initialisation
    int arr[3][4] = {
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0}
    };

    // Traversing
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // User Input
    int row, col;
    cout << "Enter no. of row: "<<endl;
    cin >> row;
    cout << "Enter no. of col: "<<endl;
    cin >> col;
     
    int arr[100][100];
    cout << "Enter element of 2-D array: " <<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
