#include<bits/stdc++.h>
using namespace std;
void print(char arr[]) {
 // int n = sizeof(arr)/sizeof(arr[0]);
 cout<<"In outer function"<<endl;
 cout << strlen(arr);
 // for(int i = 0; i < n; i++) {
 //  cout << arr[i];
 // }
}
int main() {
 char ch[100];
 // cin >> ch;
 // cin.getline(ch, 100);
 // cout << ch;
 
 char arr[7] = {'M', 'a', 'h', 'e', 's', 'h', '\0'};
 // cout<<"In main function"<<endl;
 // int n = sizeof(arr)/sizeof(arr[0]);
 // cout << n;

 // cout << strlen(arr);

 // for(int i = 0; i < n; i++) {
 //  cout << arr[i];
 // }
 cout << endl;
 // print(arr);

 int n;
 cout << "Enter the size of the array" << endl;
 cin >> n;
 cin.get();
 char a[100];
 for(int i = 0; i < n; i ++) {
  cin.getline(a, 100);
  cout << a << endl;
 }
}
