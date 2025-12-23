#include<bits/stdc++.h>
using namespace std;

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
