#include <bits/stdtr1c++.h>
using namespace std;
int main()
{
 // char ch[100];
 // int n;
 // cin >> n;
 // char ch[100];
 // cin.get();
 // for (int i = 0; i < n; i++) {
 //  cin.getline(ch, 100);
 //  cout << ch << endl;
 // }

 string s = "Hello";
 cout << s << endl;

 string s1(s);
 cout << s1 << endl;

 string s2 = s1;
 cout << s2 << endl;

 // traverse
 for (int i = 0; i < s.length(); i++)
 {
  cout << s[i];
 }
 cout << endl;

 // Update
 string sam = "Hello Yaar";
 cout << sam << endl;
 // Hello Yaar -> Hello Dost
 sam = "Hello Dost";
 cout << sam << endl;

 //concatenation
 string x = "Mahesh";
 string y = "Babu";
 string z = x + y;
 x = x + " " + y;
 cout << z << endl;
 cout << x << endl;

 // find particular word
 x = "Good Morning Warangal City";
 y = "Warangal";
 cout << x.find(y) << endl;

 // erase word 
 int idx = x.find(y);
 x.erase(idx, y.length() + 1);
 cout << x << endl;

 //user Input
 string str;
 // cin >> str;
 // getline(cin, str);
 // cout << str;

 // legth comparision
 string x1 = "Sameer";
 string x2 = "sameer";
 if(x1 < x2) {
  cout << "s1 is smaller than s2" <<endl;
 }else {
  cout << "s2 is smaller that s1" << endl;
 }
 cout << x1.compare(x2) << endl;
 cout << x2.substr(1, 3);
}
