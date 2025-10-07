#include<bits/stdc++.h>
using namespace std;

// void test(char ch[]) {
//  int n = sizeof(ch)/sizeof(ch[0]);
//  cout << "outer function" << n<<endl;
//  cout << " function" << strlen(ch)<<endl;
// }

int main() {
 // char ch[] = 'ab';
 // cout << ch;

 // char a[19] = {'S', 'i', 'd', 'd', 'a', 'r', 't', 'h'}; // output with garbage value
 char a[] = {'S', 'i', 'd', 'd', 'a', 'r', 't', 'h', '\0'};
 // cout << a;
 int n = sizeof(a)/sizeof(a[0]);
 // cout << "main function" << n << endl;
 char b[] = {'R', 'a', 'f','i', 'q', '\0'};
 // cout << b;
 
 // char ch = 'a';
 // cout << ch;
 char c[] = "Warangal is beautiful city";
 // cout << c;

 for (int i = 0; c[i] != '\0'; i++) {
  // cout << c[i];
 }

 // char d[] = "10000";
 // cout << typeid(d).name();

 // char x = '10000';     // error 
 // cout << x; 


 char e[100];
 // cin.getline(e, 100);
 // cout << e;
 
 // test(a);


 char ch[16] = {'V','e', 'n', 'k', 'y', '\0'};
 // cout << ch;
 // cout << ch[3];
 // cout << ch[5];

 char ak[] = "Akshay Babu";
 // cout << ak;
 // cout << ak[11];

 
}
