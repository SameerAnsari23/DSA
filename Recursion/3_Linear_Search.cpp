#include <bits/stdc++.h>
using namespace std;

bool linear(vector<int>& arr, int tar, int i) {
 // base case
 if(i == arr.size()) return false;

 if(arr[i] == tar) return true;

 // recursive relation
 linear(arr, tar, i+1);
}

int main () {
 vector<int>arr = {7, 8, 9, 13, 4};
 int target = 3;
 if(linear(arr, target, 0)) {
  cout <<"Found" << endl;
 }
 else {
  cout << "Not Found" << endl;
 }

 return 0;
}
