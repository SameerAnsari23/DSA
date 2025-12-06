#include<bits/stdc++.h>
using namespace std;

// string reverse(string &s, int i, int j) {
//  if (i > j) return s;
//  swap(s[i], s[j]);
//  i++;
//  j--;
//  return reverse(s, i+1, j-1);
// }


void reverse(string &s, int i, int j) {
 if (i > j) return;
 swap(s[i], s[j]);
 i++;
 j--;
 reverse(s, i+1, j-1);
}


int main() {
 string s = "abcde";
 int n = s.length();

 // for string
 // cout << reverse(s, 0, n - 1);  
 
 // for void
 reverse(s, 0, n-1);
 cout << s << endl;
 return 0;
}
