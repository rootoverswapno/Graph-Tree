#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
int dfs(int vertex)
{
    //perform action
    visited[vertex]=true;
    int ct=1;
    for(int child:graph[vertex])
    {
        if(!visited[vertex])
        {
            ct+=dfs(child);
        }
    }
    return ct;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    
    }
    int totalVisited = dfs(1);
    cout << "Total visited: " << totalVisited << endl;




    return 0;
}