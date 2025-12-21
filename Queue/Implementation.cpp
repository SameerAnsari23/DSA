#include<bits/stdc++.h>
using namespace std;

class Queue {
 int* arr;
 int top;
 int rear;
 int size;


 public: 
 Queue() {
  size = 10000;
  arr = new int[size];
  top = 0;
  rear = 0;
 }

// Push
 void push(int x) {
  if(rear == size) {
   cout << "Queue is full" << endl;
  }
  else {
   arr[rear] = x;
   rear++;
  }
 }


// Pop
 void pop() {
  if(top == rear) {
   cout << "Queue is empty" << endl;
  }else {
   arr[top] = -1;
   top++;
  }
 }


// front 
 int front() {
  if(top == rear) {
   return -1;
  }
  else {
   return arr[top];
  }
 }

// Check Empty
 bool isEmpty() {
  if (top == rear) {
   return true;
  }
  else {
   return false;
  }
 }
};


int main() {
 Queue q;

  // Push
 q.push(3);
 q.push(4);
 q.push(5);

  // Pop
 q.pop();
 q.pop();
 q.pop();

  // Front
 cout << q.front() << endl;
 if(q.isEmpty()) {
   cout << "Queue is empty" << endl;
 }
 else {
  cout << "Queue is not empty" << endl;
 }
  
 return 0;
}
