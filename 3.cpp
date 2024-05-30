#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter value of n:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])    /// array unsorted condition
        {
          flag=false;  
        }

    }
    if(flag==true)
     cout<<"array is sorted";
    else
      cout<<"array is unsorted";
    
}


