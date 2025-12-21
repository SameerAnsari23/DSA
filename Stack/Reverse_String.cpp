#include<bits/stdc++.h>
using namespace std;

int main() {
 string str = "JANVI";
 stack<char> st;
 for (int i = 0; i < str.length(); i++) {
  st.push(str[i]);
 }

 string output = "";
 while (!st.empty()) {
  char ch = st.top();
  output.push_back(ch);
  st.pop();
 };

 cout << output << endl;

 return 0;
} 
