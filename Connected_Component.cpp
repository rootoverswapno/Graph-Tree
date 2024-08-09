#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int>graph[N];
bool visited[N];
void dfs(int vertex)
{
    //take action on vertex 
    // after entering the vertex
    // cout<<vertex<<endl;
    visited[vertex]=true;
    for(int child:graph[vertex])
    {
        // cout<<" Par "<<vertex<<" child  "<<child<<endl;
        if(visited[child])
        continue;
        
        //take action on child before
        //entering the child node

        dfs(child);

        //take action on chield 
        //after exitiong chield node

    }

    //take action on vertex before
    // exition the chield
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
    int ct=0;
    for(int i=1;i<=n;++i)
    {
        if(visited[i])
        {
            continue;
        }
        else
        {
            dfs(i);
            ct++;
        }
    }
     cout<<ct<<endl;



    return 0;
}