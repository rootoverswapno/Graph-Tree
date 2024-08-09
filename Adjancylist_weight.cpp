#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<pair<int,int>>v[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int v1,v2,wt;
        cin>>v1>>v2>>wt;
        v[v1].push_back({v2,wt});
        v[v2].push_back({v1,wt});
    }
    for(int i=1;i<=n;++i)
    {
         cout << "Vertex " << i << ": ";
         for(auto p:v[i])
         {
            cout<<"("<<p.first<<","<<p.second<<")";
         }
         cout<<endl;
    }


    return 0;
}