// #include<bits/stdc++.h>
#include<iostream>
#include<queue>
// #include
using namespace std;

int main() {
  // Create Queue
 queue<int>q;

  // Push 
 q.push(3);
 q.push(4);
 q.push(5);
 q.push(6);
  
 cout << "topmost element " << q.front() << endl;
 cout << "size of queue " << q.size() << endl;
  
    // Pop(Remove element)
 q.pop();
  
 cout << "size of queue " << q.size() << endl;
 cout << "topmost element " << q.front() << endl;

  // Pop(Remove element)
 q.pop();
 q.pop();
 q.pop();

  // Check Empty
 if(q.empty()) {
  cout << "Queue is empty" << endl;
 }else {
  cout << "Queue is not empty" << endl;
 }
}
