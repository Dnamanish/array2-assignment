#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(7);
    v1.push_back(8);
    v1.push_back(1);
    v1.push_back(9);
    v1.push_back(5);
    
    int count=0;
    int x ;
    cout<<"Enter value of x:";
    cin>>x;

    for(int i=0;i<=v1.size()-1;i++)
    {
      if(v1[i]>x)
      {
        count++;
      }
    }
    cout<<count<<"numbers are greater than"<<x;

}