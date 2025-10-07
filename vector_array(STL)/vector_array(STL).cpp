#include <bits/stdc++.h>
// #include<iostream>
// #include<vector>
using namespace std;

int main() {
 // Declaration
 vector<int>a;

 // Initialization
 vector<int> a1{1, 2, 3, 4, 5}; 

 // arr[5] = {0, 0, 0, 4, 0};
 vector<int>a2(6, 0);
 cout << "Size is: " << a2.size() << endl;
 cout << a1[3] << endl;
 
 // front element;
 cout << "Front element: " << a1.front() << endl;

 // Traverse
 for (int i = 0; i < a1.size(); i++) {
  cout << a1[i] << " ";
 }cout << endl;

 for (int i : a1) {
  cout << i << " ";
 } cout << endl;

 cout << "Size is: " << a1.size() <<endl;

 // Adding a extra element
 a1.push_back(6);
 for (int i : a1) {
  cout << i << " ";
 } cout << endl;
 cout << "Size is: " << a1.size() <<endl;
 
 // Remove Element from back
 a1.pop_back();
 for (int i : a1) {
  cout << i << " ";
 } cout << endl;

 vector<int>d(5, 1);
 cout << "Size is: " << d.size() <<endl;
 cout << "Capacity is: " << d.capacity() <<endl;
 d.push_back(6);
 for (int i : d) {
  cout << i << " ";
 } cout << endl;
 cout << "Size is: " << d.size() <<endl;
 cout << "Capacity is: " << d.capacity() <<endl;

 vector<int> b{1, 3, 4, 16, 19, 10};
 cout << "Binary Search" << binary_search(b.begin(), b.end(), 6);
 cout << endl;
 sort(b.begin(), b.end());
 for (int i : b) {
  cout << i << " ";
 } cout << endl;
 return 0;
}
