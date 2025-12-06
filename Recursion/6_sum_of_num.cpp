#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int n) {
 if (n == 0) {
  return 0;
 }
 if (n == 1) {
  return arr[0];
 }

 return arr[0] + getSum(arr+1, n-1);
}


int main() {
 int arr[] = {2, 3, 4, 5, 9};
 int n = sizeof(arr)/sizeof(arr[0]);
 cout << getSum(arr, n);
 return 0;
}
