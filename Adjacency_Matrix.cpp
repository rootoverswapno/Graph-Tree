#include<bits/stdc++.h>
using namespace std;
const int N=10;
// int graph[N][N];
vector<vector<int>>graph(N,vector<int>(N,0));
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int e1,e2;
        cin>>e1>>e2;
        graph[e1][e2]=1;
        graph[e2][e1]=1;

    }
    int s=graph.size();
    for(int i=0;i<s;++i)
    {
        for(int j=0;j<s;++j)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}