#include <iostream>

using namespace std;
int main()
{
  int n;
  cout << "Enter value of n:";
  cin >> n;
  int arr[n];
  int even = 0, odd = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i <n; i++)
  {
    if (i % 2 == 0)
    {
      even = even + arr[i];
    }
    else
    {
      odd = odd + arr[i];
    }
  }
  int difference = even - odd;
  cout << difference;
}
