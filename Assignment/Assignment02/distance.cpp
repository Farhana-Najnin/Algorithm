#include<bits/stdc++.h>
using namespace std;
const int N=100001;
vector<int>adj[N];
int level[N];
bool visited[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v:adj[u])
        {
            if(visited[v]==true) continue;
            q.push(v);
            visited[v]=true;
            level[v]=level[u]+1;
        }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        memset(visited,false,sizeof(visited));
        memset(level,0,sizeof(level));
        int s;
        cin>>s;
        bfs(s);
        int x;
        cin>>x;
         if(s!=x&&level[x]==0){
                int r=-1;
           cout<<r<<endl;
        }

        else
            cout<<level[x]<<endl;
    }
    return 0;
}
