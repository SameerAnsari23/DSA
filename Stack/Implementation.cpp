#include<bits/stdc++.h>
using namespace std;

class Stack {
 public:
 int *arr;
 int size;
 int top;

 Stack(int s) {
  this->size = s;
  arr = new int[s];
  top = -1;
 }

// Push
 void push(int ele) {
  if (size - top > 1) {
   top++;
   arr[top] = ele;
  }
  else {
   cout << "You can not insert a element" << endl;
  }
 }

// Pop
 void pop() {
  if(top >= 0) {
   top--;
  } else {
   cout << "Stack is empty" << endl;
  }
 }


// Top
 int peek() {
  if(top >= 0) {
   return arr[top];
  }
  else {
   cout <<"Stack is empty" <<endl;
   return -1;
  }
 }

// Check Empty
 bool isEmpty() {
  if (top == -1) {
   return true;
  }
  else {
   return false;
  }
 }
};


int main() {
 Stack st(5);
 st.push(1);
 st.push(2);
 st.push(4);
 st.pop();
 // st.top();
 cout << st.peek() << endl;

 if(st.isEmpty()) {
  cout << "Stack is Empty" <<endl;
 }
 else {
   cout << "Stack is not empty" << endl;
  }
 return 0;
}
