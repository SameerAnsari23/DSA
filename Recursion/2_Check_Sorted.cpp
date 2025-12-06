#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& arr, int i) {
 //base case
 if (i == arr.size()-1) return true;
 if (arr[i] > arr[i+1]) return false;
 isSorted(arr, i+1);
}

int main() {
 vector<int>arr = {7, 8, 9, 4, 15};
 if (isSorted(arr, 0)) {
  cout << "Sorted" << endl;
 }
 else {
  cout << "Not Sorted" << endl;
 }
}
