#include <iostream>

using namespace std;
int main()
{
  int n;
  int arr[] = {1, 2, 2, 1, 3, 4, 6, 4,3};
  n = sizeof(arr) / 4;
  for (int i = 0; i < n; i++)
  {
    bool flag = true; // true=>unique
    for (int j = 0; j < n; j++)
    {
      if (j == i)
      {
        continue;
      }
      if (arr[i] == arr[j])
      {
        flag = false;
        break;
      }
    }
    if (flag == true)
      {
        cout << arr[i];
        break;
      }
  }
}
