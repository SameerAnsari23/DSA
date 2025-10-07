#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int n, int tar) {
 int s = 0, e = n-1;

 while (s <= e) {
  int mid = (s+e)/2;

  if (arr[mid] == tar) {
   return true;
  } else if (arr[mid] < tar) {
   s = mid + 1;
  } else if (arr[mid] > tar) {
   e = mid - 1;
  }
 }
 return false;
}
int main() {

 int arr[10] = {1, 3, 4, 6, 9, 10};
 int n = sizeof(arr)/sizeof(arr[0]);
 int target = 16;

 if(binarySearch(arr, n, target)) {
  cout << "Found" << endl;
 }else {
  cout << "Not Found" << endl; 
 }
 return 0;
}
