#include<bits/stdc++.h>
using namespace std;

// Create Node
class Node{
 public: 
 // Declare
 int data;
 Node* next;
 
 // Defined
 Node(int value) {
  data = value;
  next = NULL;
 }
};


// Create Linked List
class LinkedList {
 private:
 Node* head;
 
 public:
 LinkedList() {
  head = NULL;
 }

// Insert Node at Beginning
 void insertAtBeginning(int value){
   Node* newNode = new Node(value);
   newNode->next = head;
   head = newNode; 
 }

// Insert Node at Ending
 void insertAtEnding(int value) {
  Node* newNode = new Node(value);

   // Head is not present
  if (head == NULL) {
   head = newNode;
   return;
  }
  
  Node* temp = head;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  
  temp->next = newNode;

 }

// Remove node from linked list
 void deleteNode(int value) {
   // Target node is head
  if (head->data == value) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return;
  }

  Node* curr = head;
  while (curr->next != NULL && curr->next->data != value) {
    curr = curr->next;
  }
  
  if (curr->next != NULL) {
      Node* temp = curr->next;
      curr->next = temp->next;
      delete temp;
  }
 }

// Print the linked list
 void display() {
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
 }
};


int main() {
  LinkedList list;
  
  // Insert Node at Beginning
  list.insertAtBeginning(1);
  list.insertAtBeginning(2);
  list.insertAtBeginning(3);

  // Insert Node at Ending
  list.insertAtEnding(4);
  list.insertAtEnding(5);

  // Remove node
  list.deleteNode(2);

  // Print Linked List
  list.display();
  
  return 0;
}
