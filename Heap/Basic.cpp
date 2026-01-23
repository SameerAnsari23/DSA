#include<bits/stdc++.h>
using namespace std;

int main() {
 // Max Heap using priority_queue
 // priority_queue<int> pq;

 // Min Heap using priority_queue
 priority_queue<int, vector<int>, greater<int>> pq;

 // Inserting elements into the max heap
 pq.push(10);
 pq.push(5);
 pq.push(20);
 pq.push(15);

 cout << "Max Heap elements in order of removal:" << endl;
 cout << pq.size() << endl;
 // Removing elements from the max heap
 while (!pq.empty()) {
  cout << pq.top() << " "; // Print the maximum element
  pq.pop(); // Remove the maximum element
 }

 cout << endl;
 return 0;
}
