#include<bits/stdc++.h>
using namespace std;

void nge(int arr[], int n) {
 stack<int> st;
 vector<int>ans;
 for (int i = n-1; i >= 0; i--) {
  while (!st.empty() && st.top() <= arr[i]) {
   st.pop();
  }

  if (st.empty()) {
   // cout << -1 << " ";
   ans.push_back(-1);
  } else {
   // cout << st.top() << " ";
   ans.push_back(st.top());
  }
  st.push(arr[i]);
 }
 reverse(ans.begin(), ans.end());
 for(int i = 0; i < ans.size(); i++) {
   cout << ans[i] << " ";
  }
}

int main() {
 int arr[] = {5, 3, 6, 7, 2, 1, 4};
 int n = sizeof(arr)/sizeof(arr[0]);
 nge(arr, n); 
}
