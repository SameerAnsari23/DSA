#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(string& str, int s, int e) {
 // base case
 if (s > e) {
  return true;
 }

 if (str[s] != str[e]) {
  return false;
 }
 else {
  return isPallindrome(str, s+1, e-1);
 }
}

int main() {
 string str = "acba";

 if(isPallindrome(str, 0, str.length()-1)) {
  cout << "Pallindrome" <<endl;
 }else {
  cout << "Not Pallindrome" << endl;
 }
  // cout<<"warangal"<<endl;
}
