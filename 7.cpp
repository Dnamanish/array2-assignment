#include<iostream>
using namespace std;
int main()
{
  int n;
  int arr[] = {1, 2, 2, 1, 3, 4, 6, 4,3};
  n = sizeof(arr) / 4;
  int i=0;
  int j=n-1;
  bool flag=true;
  while(i<j)
  {
    if(arr[i]!=arr[j])
     {
        flag=false;
        break;
     }
     i++;
     j--;
  } 
  if(flag==true)
   cout<<"palindrome";
  else
   cout<<"Not palindrome";
   



}