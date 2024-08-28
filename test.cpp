#include<bits/stdc++.h>
using namespace std;
int main()
{

  vector<int>v={1,3,5,7,9,11,13,15};
  for(int i=0;i<v.size()-2;++i)
  {
    for(int j=i+1;j<v.size()-1;++j)
    {
        for(int k=j+1;k<v.size();++k)
        {
             if(v[i]+v[j]+v[k]==30)
             {
                cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
             }
        }
    }
  }


return 0;
}