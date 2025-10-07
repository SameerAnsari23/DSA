#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char ch[]){
 int n = strlen(ch);
 int i = 0,j = n-1;
 while(i<j){
  if(ch[i] == ch[j]){
   i++;
   j--;
  }
  else{
   return false;
  }
 }
 return true;
}

int main(){
 char ch[100];
 cout<<"Enter a palindrome String : ";
 // cin>>ch;
 cin.getline(ch, 100);
 
 if(checkPalindrome(ch)){
  cout<<ch<<" is a Palindrome String";
 }
 else{
  cout<<ch<<" is not a Palindrome String";
 }
 return 0;
}
