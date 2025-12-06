#include<bits/stdc++.h>
using namespace std;

bool binary(vector<int>& arr, int s, int e, int tar) {
 // base case
 if(s > e) return false;

 int mid = (s+e)/2;

 if(arr[mid] == tar) return true;
 else if (arr[mid] < tar) binary(arr, mid+1, e, tar);
 else if (arr[mid] > tar) binary(arr, s, mid-1, tar);
}

int main() {
 vector<int>arr = {0, 2, 3, 5, 6};
 int target = 10;
 int e = arr.size() - 1;
 if(binary(arr, 0, e, target)) {
  cout << "Found" << endl;
 }else {
  cout << "Not Found" << endl;
 }

}
