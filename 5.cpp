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
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0) /// odd index
        {
            arr[i] = arr[i] * 2;
        }
        else            /// even index
        {
            arr[i] = arr[i] + 10;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
