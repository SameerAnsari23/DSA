#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e) {
 int mid = (s + e)/2;
 int len1 = mid - s + 1;
 int len2 = e - mid;

 int *leftPart = new int[len1];
 int *rightPart = new int[len2];

 // copy into leftPart
 int arrIdx = s;
 for (int i = 0; i < len1; i++) {
  leftPart[i] = arr[arrIdx++];
 }

 arrIdx = mid+1;
 for (int i = 0; i < len2; i++) {
  rightPart[i] = arr[arrIdx++];
 }

 int idx1 = 0;
 int idx2 = 0;

 arrIdx = s;


 while(idx1 < len1 && idx2 < len2) {
  if (leftPart[idx1] < rightPart[idx2]) {
   arr[arrIdx] = leftPart[idx1];
   arrIdx++;
   idx1++;
  }
  else {
   arr[arrIdx] = rightPart[idx2];
   arrIdx++;
   idx2++;
  }
 }
 while (idx1 < len1) 
 {
  /* code */
  arr[arrIdx] = leftPart[idx1];
   arrIdx++;
   idx1++;
 }
 
 while (idx2 < len2) 
 {
  /* code */
  arr[arrIdx] = rightPart[idx2];
   arrIdx++;
   idx2++;
 }
 delete []leftPart;
 delete []rightPart;

}

void divide(int arr[], int s, int e) {
 // base case
 if (s >= e) return ;

 int mid = (s+e)/2;

 // Left part
 divide(arr, s, mid);

 // Right part
 divide(arr, mid+1, e);

 merge(arr, s, e);
}

int main() {
 int arr[] = {2, 16, 30, -1, 40};
 int n = sizeof(arr)/sizeof(arr[0]);
 // cout << n <<endl;

 divide(arr, 0, n-1);

 for (int i = 0; i < n; i++) {
  cout << arr[i] << " ";
 }

 return 0;
}
