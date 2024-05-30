#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    v.push_back(11); 
    v.push_back(8);
    v.push_back(1);
    v.push_back(9);
    v.push_back(5);

    int g1=v[0];
    int g2=v[0];
    int g3=v[0];
    for (int i = 0; i < v.size() - 1; i++)
    {
      if(v[i]>g1)
      {
        g1=v[i];
      }
        
    }
    for(int i=0;i<v.size()-1;i++)
     {
        if(v[i]>g2 && v[i]!=g1)
          g2=v[i];
     }
    for(int i=0;i<v.size()-1;i++)
     {
        if(v[i]>g3 && v[i]!=g2 && v[i]!=g1)
          g3=v[i];
     }

     cout<<g1<<endl;
     cout<<g2<<endl;
     cout<<g3;
    
}


