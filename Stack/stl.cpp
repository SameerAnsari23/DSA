#include<bits/stdc++.h>
using namespace std;

int main() {
 stack<int>bindu;
 bindu.push(9);
 bindu.push(2);
 bindu.push(7);

 bindu.pop();

 cout << bindu.top() << endl;

 bindu.pop();
 cout << bindu.top() << endl;
 
 bindu.pop();
 if (bindu.empty()) {
  cout << "Empty" <<endl;
 } 
 else {
  cout << "Not Empty" << endl;
 }
}
