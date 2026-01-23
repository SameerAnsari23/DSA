#include<bits/stdc++.h>
using namespace std;

int main() {
 // Create an unordered_map
 unordered_map<int, int>mp;

 // Insert key-value pairs into the unordered_map
 mp.insert({1, 10});
 mp.insert({2,12});

 // Access and modify values using keys
 mp[3] = 15;
 mp[3] = 18; // Update the value at key 3
 mp.insert({4,20});

 mp.erase(2); // Erase the key 2

 mp.find(4); // Find the key 4
 cout << "Value at key 4: " << mp[4] << endl;

 // Iterate through the unordered_map and print key-value pairs
 for (auto it : mp) {
  cout << it.first << "->" << it.second << endl;
 }
 return 0;
}
