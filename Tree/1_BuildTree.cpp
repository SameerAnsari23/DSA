#include<bits/stdc++.h>
using namespace std;

class Node{
 public:
 // Declare the variable
 int data;
 Node* left;
 Node* right;

 // Define the variable
 Node(int value) {
  data = value;
  left = NULL;
  right = NULL;
 }
};


Node* buildTree() {
 int val;
 cout << "Enter the value: " << endl;

// Takes input from user
 cin>>val;    

// Handle the NULL
if (val == -1) return NULL;

 // Create a root node           
 Node* root = new Node(val);

// Left part of tree
 root->left = buildTree();

// Right part of tree
 root->right = buildTree();

// Returning the root
 return root;
}

void inorder(Node* root) {
 // base case
 if (root == NULL) return;

 // Recursive call for left part
 inorder(root->left);

 // Print the node
 cout << root->data << " ";

 // Recrusive code for right part
 inorder(root->right);
}

int main() {
 // Create a tree
 Node* root = buildTree();
 
 // Traverse on a tree
 inorder(root);
}
