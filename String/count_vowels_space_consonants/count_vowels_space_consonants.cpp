#include <bits/stdc++.h>
using namespace std;
int main()
{
 int count = 0, consonants = 0, space = 0, digit = 0;
 string st = "Warangal is a beautiful city 1234";
 for (int i = 0; i < st.length(); i++)
 {
  if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
  {
   count++;
  }
  else if (st[i] == ' ')
  {
   space++;
  }
  else if (st[i] == '0' || st[i] == '1' || st[i] == '2' || st[i] == '3' || st[i] == '4' || st[i] == '5' || st[i] == '6' || st[i] == '7' || st[i] == '8' || st[i] == '9')
  {
   digit++;
  }
  else
  {
   consonants++;
  }
 }
 cout << "Vowels is : " << count << endl;
 cout << "Constants is : " << consonants << endl;
 cout << "Spaces is : " << space << endl;
 cout << "Digits is : " << digit << endl;
 return 0;
}
