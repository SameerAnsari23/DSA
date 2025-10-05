#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
 cout << " print the array " << endl;

 // print the array
 for (int i = 0; i < size; i++)
 {
  cout << arr[i] << " ";
 }
}

int main()
{

 // declaration
 int arr[15];

 // initialising an array
 int arr1[3] = {5, 7, 11};

 // accesing an element
 cout << arr1[2] << endl;

 // accessing an array
 cout << arr[14] << endl;

 int arr3[15] = {2, 7};

 int n = 15;
 // printArray(arr3, 15);
 int size = sizeof(arr3) / sizeof(int);
 cout << size << endl;

 // initialising all locations with 0
 int fourth[10] = {0};

 int arr4[8] = {3, 5, 6, 7, 8};
 cout << " printing the array " << endl;
 // print the array
 for (int i = 0; i < 5; i++)
 {
  cout << arr4[i] << " ";
 }


 // UserInput
 int n;
 cin >> n;

 int arr5[100];

 // taking input in array
 for (int i = 0; i < n; i++)
 {
  cin >> arr5[i];
 }
 cout << endl;
  // print the array
 for (int i = 0; i < n; i++)
 {
  cout << arr5[i] << " ";
 }
 return 0;
}
